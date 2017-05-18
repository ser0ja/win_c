#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "user32.lib")

#ifndef _WIN64
#define _WIN64
#endif
#ifndef UNICODE
#define UNICODE
#endif

//#include "main.h"
//#include "win.h"

#define CALLBACK __stdcall
#define WINAPI __stdcall

struct HINSTANCE__ { int unused; };
typedef struct HINSTANCE__ *HINSTANCE;

typedef int INT;
typedef char CHAR;
typedef CHAR *LPSTR;
typedef unsigned short wchar_t;
typedef wchar_t WCHAR;
typedef WCHAR *PWSTR;

#ifdef UNICODE

#define __T(x) L ## x
#define _tmain wmain
#define _tWinMain wWinMain

#else // !UNICODE
	
#define __T(x) x
#define _tmain main
#define _tWinMain WinMain

#endif // UNICODE

		
int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, INT nCmdShow){
	//MessageBox(NULL, TEXT("Привет, мир!"), TEXT("Сообщение"), MB_OK);
	return 0;
}