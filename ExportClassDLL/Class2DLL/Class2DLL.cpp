// Class2DLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Class2DLL.h"


bool DBDA::inital()
{
	cout << "this is inital" << endl;
	return true;
}

void DBDA::detect(int param)
{
	cout << "this is detect" << endl;
}

extern "C" CLASS2DLL_API IALG* _cdecl CreateAlg()
{
	return new DBDA;
}