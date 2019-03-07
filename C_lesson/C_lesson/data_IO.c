// How to input or output from user

#include <stdio.h>
#include <string.h>

#define INPUT_MAX 100

int main()
{
	int iNum[10];
	char cStr[INPUT_MAX];

	printf("Iput number : ");
	scanf("%d", &iNum);
	iNum[1] = 5;
	printf("What is &iNum = %d\n", &iNum);
	printf("What is &cStr = %d\n", &cStr);
	printf("What is &iNum[1] = %d\n", &iNum[1]);
	printf("What is *iNum = %d\n", *iNum);
	printf("What is iNum[0] = %d\n", iNum[0]);
	printf("What is iNum[1] = %d\n", iNum[1]);
	printf("What is sizeof(iNum) = %d\n",sizeof(iNum));
	*&iNum[3] = 6;
	return 0;

}