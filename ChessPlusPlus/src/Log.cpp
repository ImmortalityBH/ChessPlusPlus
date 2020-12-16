#include "Log.h"
#include <filesystem>
#include <chrono>
#include <ctime>

namespace fs = std::filesystem;

Log::Log()
	: log_path("log") 
{
	try {
		if (!fs::exists("log")) {
			fs::create_directory("log");
		}
		this->output_file.open("log/log.txt");
		output_file.exceptions(std::ios::badbit || std::ios::failbit);

		std::cout.set_rdbuf(output_file.rdbuf());
		
		output_file << "This is a log file used to output"
			" debug messages at runtime.\n";
	}
	catch (const std::exception& e) {
		Log::DebugPrint(std::string("Failed to"
			"created log: ").append(e.what()));
	}
}

void Log::DebugPrint(const std::string what, Log::LOG_TYPE log_type) {
	if (output_file.is_open()) {
		std::string str; // log type string
		switch (log_type) {
		case Log::LOG_TYPE::ERR:
			str = " ERROR: ";
			break;
		case Log::LOG_TYPE::MSG:
			str = " MESSAGE: ";
			break;
		default:
			str = " UNKNOWN: ";
			break;
		}
		std::cout << Log::Get_System_Time() << str << what << "\n";
	}
}

void Log::FlushLog() {
	if (output_file.is_open()) {
		std::cout.flush();
		output_file.flush();
	} else {
		std::cout.flush();
	}
}

Log& Log::Get()
{
	static Log instance;
	return instance;
}

std::string Log::Get_System_Time() {
	const auto time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::tm* now = std::localtime(&time);
	std::string result = std::to_string(now->tm_hour) + ":";
	result.append(std::to_string(now->tm_min) + ":");
	result.append(std::to_string(now->tm_sec) + " ");
	return result;
}
