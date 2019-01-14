//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayComFactor
//		Description		: It is used to DisplayComFactor.
//		Input			: int[IN], int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
void DisplayComFactor(int iNo1, int iNo2)
{
	int i = 2;
	while ((i <= iNo1 / 2) && (i <= iNo2 / 2))
	{
		if ((iNo1%i == 0) && (iNo2%i == 0))
			printf("%d\t", i);
		i++;
	}
}