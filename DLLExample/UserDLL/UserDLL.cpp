// UserDLL.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "../GenDLL/GenDLL.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "100 + 1 = " << add(100, 1) << std::endl;
	system("pause");
	return 0;
}

