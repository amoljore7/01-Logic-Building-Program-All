//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: SumRange
//		Description		: It is return Addtion of All The Number.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
int SumRange(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	if (iNo <= 0)
	{
		return -1;
	}

	for (iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;
		//printf("%d\t", iSum);
	}
	printf("%d\t", iSum);
	return iSum;
}