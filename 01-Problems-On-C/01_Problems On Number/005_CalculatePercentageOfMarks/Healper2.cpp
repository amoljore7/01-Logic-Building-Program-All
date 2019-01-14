//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayPercentage
//		Description		: It is used to Calculate Percentage.
//		Input			: int[IN], int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"

double  DisplayPercentage(int iMarks, int iResult)
{
	double dValue = 0.0;
	if ((iMarks <= 0) || (iResult < 0))
	{
		return ERROR_INVALIDE_INPUT;
	}
	if (iResult > iMarks)
	{
		return ERROR_MISMATCH_INPUT;
	}
	dValue = (((double)iResult / (double)iMarks)*100);
	return dValue;
}