#include "LuaManager.h"
#include "Log.h"

LuaManager::LuaManager() {
	lua_state = luaL_newstate();
}

LuaManager::~LuaManager() {
	lua_close(this->lua_state);
}

LuaManager& LuaManager::Get() {
	// singleton
	static LuaManager instance;
	return instance;
}

int LuaManager::GetGlobal(const std::string& name) {
	return 0;
}

int LuaManager::DoFile(const std::string& file_path) {
	return luaL_dofile(GetState(), file_path.c_str());
}

bool LuaManager::Check(int result, int stackLoc) {
	if (result != LUA_OK) {
		std::string errormsg = lua_tostring(this->lua_state, stackLoc);
		Log::Get().DebugPrint(errormsg);
		return false;
	}
	return true;
}

int LuaManager::Pop(int stackLoc) {
	return 0;
}

int LuaManager::IsTable(int stackLoc) {
	return 0;
}
