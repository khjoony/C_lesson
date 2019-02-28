// What is data type?

#include <stdio.h>
#include <float.h>
#include <cstdbool>

int main()
{
	int iNum;     // 4바이트 메모리(저장공간)을 할당 해주고 그 별명을 iNum이라고 정한다.
	printf("sizeof iNum = : %d\n", sizeof(iNum));

	float fDecNum;   // 4바이트 메모리(저장공간)을 할당 해주고 그 별명을 fDecNum이라고 정한다.
	printf("sizeof fDedNum = : %d\n", sizeof(fDecNum));

	char cChar;		// 1바이트 메모리(저장공간)을 할당 해주고 그 별명을 cChar이라고 한다.
	printf("sizeof cChar = : %d\n", sizeof(cChar));

	double dDouble;		// 8바이트 메모리(저장공간)을 할당 해주고 그 별명을 dBouble이라고 한다.
	printf("sizeof dDouble = : %d\n", sizeof(dDouble));

	bool bBool;		// 1바이트 메모리(저장공간)을 할당 해주고 그 별명을 bBool이라고 한다.
	printf("sizeof bBool = : %d\n", sizeof(bBool));


	return 0;
}