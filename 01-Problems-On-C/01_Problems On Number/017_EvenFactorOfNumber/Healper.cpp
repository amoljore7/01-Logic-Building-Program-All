//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayEvenFactor
//		Description		: It is used to DisplayEvenFactor.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
void DisplayEvenFactor(int iNo)
{
	if (iNo <= 0)
	{
		iNo = -iNo;
	}
	int i = 0;
	for (i = 1; i <= iNo / 2; i++)
	{
		if ((i % 2) == 0)
		{
			printf("%d\t", i);
		}
	}
}