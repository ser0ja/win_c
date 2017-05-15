#define _WIN64 1
#define UNICODE 1

#include "main.h"
#include "win.h"

INT WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd){
	MessageBox(NULL, TEXT("Привет, мир!"), TEXT("Сообщение"), MB_OK);
	return 0;
}