//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayClass
//		Description		: It is used to Display Result.
//		Input			: int[IN], int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"

void  DisplayClass(int iTot, int iObt)
{
	double dResult = 0.0;
	if ((iTot <= 0) || (iObt < 0))
	{
		return;
	}
	if (iObt > iTot)
	{
		return;
	}
	dResult = DisplayPercentage(iTot, iObt);
	if (dResult == ERROR_INVALIDE_INPUT)
	{
		printf("ERROR_INVALIDE_INPUT");
	}
	if (dResult == ERROR_MISMATCH_INPUT)
	{
		printf("ERROR_MISMATCH_INPUT");
	}
	 if (dResult < 35.0)
	{
		printf("Fail\n");
	}
	else if (dResult < 50.0)
	{
		printf("Pass Class\n");
	}
	else if (dResult < 60)
	{
		printf("Second Class\n");
	}
	else if (dResult < 75)
	{
		printf("Fisrt Class\n");
	}
	else
	{
		printf("Distintion\n");
	}

}
