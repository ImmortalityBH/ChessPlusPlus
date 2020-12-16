#pragma once

#include <string>
#include <iostream>
#include <fstream>

class Log {
public:
	static enum class LOG_TYPE : uint32_t {
		ERR = 0,
		MSG = 1,
	};
public:
	Log();
	void DebugPrint(const std::string what, Log::LOG_TYPE log_type = LOG_TYPE::MSG);
	void FlushLog();
	static Log& Get();
private:
	static std::string Get_System_Time();
private:
	std::ofstream output_file;
	std::string log_path;
};
