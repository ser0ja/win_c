#pragma once

#define CALLBACK __stdcall
#define WINAPI __stdcall
#define WINAPIV __cdecl
#define APIENTRY WINAPI
#define APIPRIVATE __stdcall
#define PASCAL __stdcall

typedef struct HINSTANCE__ *HINSTANCE;
typedef struct HWND__ *HWND;

#define MAX_PATH 260
#define NULL ((void *)0)
#define FALSE 0
#define TRUE 1

typedef unsigned long ULONG;
typedef unsigned short USHORT;
typedef unsigned char UCHAR;
typedef unsigned long DWORD;
typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef float FLOAT;
typedef int INT;
typedef unsigned int UINT;
