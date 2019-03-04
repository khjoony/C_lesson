// What is an unsigned dataType?

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	// int 의 최대 사이즈?
	int iNumMax = INT_MAX;
	printf("iNumMax = %d\n", iNumMax);

	// char 의 최대 사이즈?
	char cNumMax = CHAR_MAX;
	printf("cNumMax = %d\n", cNumMax);

	
	// long 의 최대 사이즈?
	long lNumMax = LONG_MAX;
	printf("lNumMax = %d\n", lNumMax);

	// long long 의 최대 사이즈?
	long long llNumMax = LLONG_MAX;
	printf("llNumMax = %d\n", llNumMax);


	// int 의 최대 사이즈에 1을 더하면?
	printf("iNumMax  + 1= %d\n", iNumMax +1);

	// char 의 최대 사이즈에 1을 더하면?
	printf("cNumMax  + 1= %d\n", cNumMax +1);

	
	// long 의 최대 사이즈에 1을 더하면?
	printf("lNumMax + 1 = %d\n", lNumMax + 1);

	// long long 의 최대 사이즈에 1을 더하면?
	printf("llNumMax  + 1= %d\n", llNumMax +1);
	return 0;
}