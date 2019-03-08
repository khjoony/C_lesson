// How to input or output from user

#include <stdio.h>
#include <string.h>


#define INPUT_MAX 15

int main()
{
	int iInput;
	char cInput;
	int arrInput[INPUT_MAX];
	for (int i = 0; i < INPUT_MAX; ++i)
	{
	printf("%d번 학생의 점수를 입력해주세요 :", i +1);
	scanf_s("%d", &arrInput[i]);
	}
	for (int i = 0; i < INPUT_MAX; ++i)
	{
	printf_s("%2d 번 학생의 점수는 \"%4d\"  입니다.\n",i+1,  arrInput[i]);
	}

	return 0;   
}