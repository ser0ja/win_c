#pragma once

typedef CHAR *LPSTR;
typedef CONST WCHAR *LPCWSTR;

#define __TEXT(quote) L##quote
#define TEXT(quote) __TEXT(quote)