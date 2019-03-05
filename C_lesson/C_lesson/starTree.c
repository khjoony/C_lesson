// Let's make a tree !!!  oh Yes~~~~
#include <stdio.h>
#define STAR_MAX 10
int main()
{
	int i, j, k;
	// printf("*");
	for (i = 0; i < STAR_MAX; ++i)
	{
		for (k = STAR_MAX; k > i; --k)
		{
			printf(" ");
		}
		for (j = 0; j < i; ++j)
		{
			//첫줄은 공백문자가 STAR_MAX 만큼
			//두번째줄은 공백이 하나씩 줄어야 함

			printf("*");
		}
		printf("\n");

	}
	return 0;
}