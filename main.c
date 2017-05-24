
#define _WINDOWS 1
#define _WIN64 1
#define UNICODE 1
#define _WIN32_WINNT 0x0A00 // windows 10
#define WINVER 0x0A00 // windows 10

//#include "main.h"
//#include "win.h"

#undef __cdecl
#define __stdcall
#define WINAPI __stdcall
#define NULL ((void *)0)

struct HINSTANCE__ { int unused; };
typedef struct HINSTANCE__ *HINSTANCE;
typedef void *HWND;

typedef int INT;
typedef unsigned int UINT;
typedef char CHAR;
typedef unsigned short wchar_t;
typedef wchar_t WCHAR;
typedef WCHAR *LPWSTR;
typedef const WCHAR *LPCWSTR;

#ifdef UNICODE
INT WINAPI wWinMain(HINSTANCE, HINSTANCE, LPWSTR, INT);
INT WINAPI MessageBoxW(HWND, LPCWSTR, LPCWSTR, UINT);
#define __T(x) L ## x
#define _T(x) __T(x)
#define _tmainCRTStartup wWinMainCRTStartup
#define _tWinMain wWinMain
#define _runtwinmain _runwwinmain
#define MessageBox MessageBoxW
#else // !UNICODE
#endif // UNICODE

#define MB_OK 0x00000000L

INT WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, INT nShowCmd){
	MessageBox(NULL, _T("Привет, мир!"), _T("Сообщение"), MB_OK);
	return 0;
}
