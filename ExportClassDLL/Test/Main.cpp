#include <iostream>
#include <windows.h>
#include "../Class2DLL/Alg_Interface.h"

using namespace std;

typedef IALG*(_cdecl *ALG_Factory)();

int main()
{
	HINSTANCE Hdll = LoadLibrary(L"Class2DLL.dll");
	if (!Hdll)
	{
		cerr << "Unable to load DLL£¡\n";
		return 1;
	}

	ALG_Factory pf = reinterpret_cast<ALG_Factory>(GetProcAddress(Hdll, "CreateAlg"));
	if (!pf)
	{
		cerr << "Unable to load CreateALG form DLL!\n";
		return 1;
	}

	IALG* alg = pf();

	alg->inital();
	alg->detect(1);

	FreeLibrary(Hdll);
	return 1;

}