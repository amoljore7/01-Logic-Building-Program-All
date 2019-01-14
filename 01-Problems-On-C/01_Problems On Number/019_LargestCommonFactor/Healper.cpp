//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayComFactorLarge
//		Description		: It is used DisplayComFactorLarge.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
void DisplayComFactorLarge(int iNo1, int iNo2)
{
	while (iNo2 != 0)
	{
		int iRem = 0;
		iRem = iNo1%iNo2;
		iNo1 = iNo2;
		iNo2 = iRem;

	}
	if (iNo2 == 0)
	{
		printf("%d\t", iNo1);
	}
}