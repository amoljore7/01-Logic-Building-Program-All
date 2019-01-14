//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: Display
//		Description		: It is used to Displaying City Code.
//		Input			: int[IN]
//		Output			: City
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
void Display(int iCity)
{
	if (iCity == 0)
	{
		return;
	}
	if (iCity <= 0)
	{
		iCity = -iCity;				//Ex iCity= -12    so -12=-12      ==+12
	}
	switch (iCity)
	{
	case 10:
		printf("Sangli\n");
		break;
	case 11:
		printf("Satara\n");
		break;
	case 12:
		printf("Pune\n");
		break;
	case 13:
		printf("Solaput\n");
		break;
	case 14:
		printf("Pimpri-Chinchwad\n");
		break;
	case 15:
		printf("Nashik\n");
		break;
	case 20:
		printf("Aurangabad\n");
		break;
	default:
		printf("City Name Not Found\n");
		break;
	}
	
}