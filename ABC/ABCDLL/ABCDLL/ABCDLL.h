// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� ABCDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// EXPORTCLASSDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�

#ifdef ABCDLL_EXPORTS
#define EXPORTABCDLL_API __declspec(dllexport)
#else
#define EXPORTABCDLL_API __declspec(dllimport)
#endif

class BaseClass
{
public:
	virtual ~BaseClass(){ ; };
	virtual int add(int a, int b) = 0;
	virtual int substract(int a, int b) = 0;
private:

};

class MyClass :public BaseClass
{
public:
	MyClass(){};
	int add(int a, int b);
	int substract(int a, int b);
private:

};

extern "C"
{
	EXPORTABCDLL_API BaseClass* _cdecl CreatObject();
}

typedef BaseClass* (*CreatFun)();
