//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: chkEvenOdd
//		Description		: It is used to check Number is Even or Odd.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"

BOOL chkEvenOdd(int iNo1)
{
	if ((iNo1 % 2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}