#ifdef GENDLL_EXPORTS
#define TEST_API __declspec(dllexport)
#else
#define TEST_API __declspec(dllimport)
#endif

TEST_API int add(int a, int b);