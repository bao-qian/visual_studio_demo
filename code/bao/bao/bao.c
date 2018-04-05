// bao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#if _WIN32
#include <Windows.h>
#endif


int
main(int argc, const char * argv[]) {
#if _WIN32
    // 如果你的文件是 gbk gb18010，则编码是 936
    // 如果你的文件是 utf-8，则编码是 65001
    // SetConsoleOutputCP(936);
    SetConsoleOutputCP(65001);
#endif
    int n = 10;
    int a[n];
    a[1] = 1;
    
    printf("变长数组 %d\n", a[1]);

    return 0;
}