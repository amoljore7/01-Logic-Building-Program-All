//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayPrimiam
//		Description		: Primiam Of Health Insurance.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"

int DisplayPrimiam(int pAge)
{
	int iPrimiam = 0;
	if (pAge < 0)
	{
		return ERROR_AGE;
	}
	if (pAge>0 && pAge < 20 )
	{
		iPrimiam = 2000;
	}
	else if ((pAge >= 20) && (pAge < 45))
	{
		iPrimiam = 35000;
	}
	else if((pAge >= 45) && (pAge < 70))
	{
		iPrimiam = 52000;
	}
	else
	{
		iPrimiam = 85000;
	}
	return iPrimiam;
}