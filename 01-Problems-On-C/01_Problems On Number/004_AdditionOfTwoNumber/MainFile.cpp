
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"

int Add(int, int);
int main()
{
	int iValue1 = 0, iValue2 = 0;
	int iResult = 0;

	printf("Enter Two No: \n");
	scanf_s("%d%d", &iValue1, &iValue2);

	iResult = Add(iValue1, iValue2);
	printf("Addition of Two No is = %d: \n", iResult);

	return 0;
}