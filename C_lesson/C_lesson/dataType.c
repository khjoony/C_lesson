// What is data type?

#include <stdio.h>
#include <float.h>
#include <cstdbool>

int main()
{
	int iNum;     // 4����Ʈ �޸�(�������)�� �Ҵ� ���ְ� �� ������ iNum�̶�� ���Ѵ�.
	printf("sizeof iNum = : %d\n", sizeof(iNum));

	float fDecNum;   // 4����Ʈ �޸�(�������)�� �Ҵ� ���ְ� �� ������ fDecNum�̶�� ���Ѵ�.
	printf("sizeof fDedNum = : %d\n", sizeof(fDecNum));

	char cChar;		// 1����Ʈ �޸�(�������)�� �Ҵ� ���ְ� �� ������ cChar�̶�� �Ѵ�.
	printf("sizeof cChar = : %d\n", sizeof(cChar));

	double dDouble;		// 8����Ʈ �޸�(�������)�� �Ҵ� ���ְ� �� ������ dBouble�̶�� �Ѵ�.
	printf("sizeof dDouble = : %d\n", sizeof(dDouble));

	bool bBool;		// 1����Ʈ �޸�(�������)�� �Ҵ� ���ְ� �� ������ bBool�̶�� �Ѵ�.
	printf("sizeof bBool = : %d\n", sizeof(bBool));


	return 0;
}