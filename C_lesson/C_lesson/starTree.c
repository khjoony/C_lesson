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
			//ù���� ���鹮�ڰ� STAR_MAX ��ŭ
			//�ι�°���� ������ �ϳ��� �پ�� ��

			printf("*");
		}
		printf("\n");

	}
	return 0;
}