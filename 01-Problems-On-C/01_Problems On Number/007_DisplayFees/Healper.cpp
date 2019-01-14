//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayFees
//		Description		: Return The Fees According To Standard.
//		Input			: UINT[IN],
//		Output			: UINT
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
UINT DisplayFees(UINT iValue)
{
	UINT iFees = 0;
	UINT i =0;
	switch (iValue)
	{
		i = 20;
		
	case 4:
		iFees = 25000;
		printf("%d\n", i);
		break;
	case 5:
		iFees = 15000;
		break;
	case 6:
	case 7:
		iFees = 22000;
		break;
	case 8:
		iFees = 32000;
		break;
	case 9:
	case 10:
		iFees = 31000;
		break;
	default:
		 iFees = 0;
	}
	return iFees;
}