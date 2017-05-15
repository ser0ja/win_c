#pragma once

#define CALLBACK __stdcall
#define WINAPI __stdcall
#define APIENTRY WINAPI
#define WINAPIV __cdecl
#define APIPRIVATE __stdcall
#define PASCAL __stdcall


#define MAX_PATH 260
#define NULL ((void *)0)
#define FALSE 0
#define TRUE 1
#define CONST const

typedef unsigned short wchar_t;
typedef wchar_t WCHAR;
typedef int INT;
typedef long LONG;
typedef unsigned long ULONG;
typedef short SHORT;
typedef unsigned short USHORT;
typedef char CHAR;
typedef unsigned char UCHAR;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef int BOOL;
typedef unsigned char BYTE;
typedef float FLOAT;
typedef unsigned int UINT;

typedef CHAR *NPSTR, *LPSTR, *PSTR;
typedef CONST CHAR *LPCSTR, *PCSTR;
typedef CONST WCHAR *LPCWSTR, *PCWSTR;

#define DECLARE_HANDLE(name) struct name##__ { int unused; }; typedef struct name##__ *name
DECLARE_HANDLE (HINSTANCE);
DECLARE_HANDLE (HWND);


#define __TEXT(quote) L##quote
#define TEXT(quote) __TEXT(quote)