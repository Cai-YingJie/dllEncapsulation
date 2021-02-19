#include <iostream>
#include <windows.h>
#include <thread>
#include "../ExportClassDLL/ExportClassDLL.h"

int main1()
{
	HINSTANCE hDll = LoadLibrary(L"ExportClassDLL.dll");

	if (hDll==NULL)
	{
		std::cout << "Failed to load library.\n";
	}
	else
	{
		CREATE_MATH pEnteryFunction = (CREATE_MATH)GetProcAddress(hDll, "CreateMathObject");
		ImgMath* pMath1 = pEnteryFunction();
		ImgMath* pMath2 = pEnteryFunction();


		if (pMath1)
		{
			std::cout << "10+10= " << pMath1->Add(10, 10) << std::endl;
			std::cout << "50-10= " << pMath2->Subtract(50, 10) << std::endl;
		}
		FreeLibrary(hDll);
	}

	std::cin.get();
	return 0;
}
