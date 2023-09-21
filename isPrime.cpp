#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif

#define TEST_SIZE 100000
/*
Build settings:
Configuration:          Debug, x64
Output Directory:       $(SolutionDir)$(Platform)\$(Configuration)\
Intermediate Directory: $(Platform)\$(Configuration)\
Target Name:            $(ProjectName)
*/

extern "C"
{
    __declspec(dllexport)
	int test_size()
	{
		return TEST_SIZE;
	}
	__declspec(dllexport)
    bool isPrime(int n)
    {
        // Corner case
        if (n <= 1)
            return false;

        // Check from 2 to n-1
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)
                return false;

        return true;
    }

    __declspec(dllexport)
	void primeTest()
	{
		bool p;
        for (int i = 0; i < test_size(); i++)
        {
            p = isPrime(i);
        }
	}
}
