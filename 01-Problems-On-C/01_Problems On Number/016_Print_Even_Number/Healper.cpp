//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: PrintEven
//		Description		: It is used to printf Even No.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
void PrintEven(int iNo)
{
	if (iNo <= 0)
	{
		return;
	}
	int iCnt = 0;
	for (iCnt = 1; iCnt <= iNo * 2; iCnt++)
	{
		if ((iCnt % 2) == 0)
		{
			printf("\t%d\t", iCnt);
		}
	}
}