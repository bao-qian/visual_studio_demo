// bao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#if _WIN32
#include <Windows.h>
#endif


int
main(int argc, const char * argv[]) {
#if _WIN32
    // �������ļ��� gbk gb18010��������� 936
    // �������ļ��� utf-8 (without bom)��������� 65001
    SetConsoleOutputCP(936);
    // SetConsoleOutputCP(65001);
#endif
    int n = 10;
    int a[n];
    a[1] = 1;
    
    printf("�䳤���� %d\n", a[1]);

    return 0;
}

