#include <Windows.h>
#include <WinUser.h>

#pragma once

class Key {
private:
	char keys;
public:
	char SetKeys(char _keys) { keys = _keys; return _keys; }
	char cKeys = keys; 
	void StartLogging();
};
