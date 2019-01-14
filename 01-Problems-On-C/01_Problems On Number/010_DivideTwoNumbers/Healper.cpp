//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: Divide
//		Description		: It is used to Dicide two integer.
//		Input			: int[IN], int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
int Divide(int iNum1, int iNum2)
{
	int iAns = 0;
	if (iNum1<iNum2)
	{
		return ERROR_INVALIDE_2nd_INPUT;
	}
	iAns = iNum1 / iNum2;
	return iAns;
}