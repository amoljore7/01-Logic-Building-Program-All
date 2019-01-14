//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: Display
//		Description		: It Display 10 Multiple of that Number.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
void Display(int iValue)
{
	if (iValue == 0)
	{
		return;
	}
	if (iValue <= 0)
	{
		return;
	}
	int iCnt = 0;
	for (iCnt = 1; iCnt <=10; iCnt++)
	{
		int iAns = iCnt*iValue;
		printf("%d\t", iAns);

	}

}