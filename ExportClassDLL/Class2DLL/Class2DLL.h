// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� CLASS2DLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// CLASS2DLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef CLASS2DLL_EXPORTS
#define CLASS2DLL_API __declspec(dllexport)
#else
#define CLASS2DLL_API __declspec(dllimport)
#endif

#include "Alg_Interface.h"
#include <iostream>
#include <windows.h>

using namespace std;

class DBDA :public IALG
{
	bool inital();

	void detect(int param);
};


extern "C"
{
	CLASS2DLL_API IALG* _cdecl CreateAlg();
}
