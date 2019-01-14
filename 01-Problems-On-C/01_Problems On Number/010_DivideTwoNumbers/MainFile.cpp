//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"
int main(int argc, char* argv[])
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iResult = 0;

	printf("\t\tEnter First No: ");
	scanf_s("%d", &iNo1);

	printf("\t\tEnter Second No: ");
	scanf_s("%d", &iNo2);

	iResult = Divide(iNo1, iNo2);

	if (iResult == ERROR_INVALIDE_2nd_INPUT)
	{
		printf("\t\tERROR_INVALIDE_2nd_INPUT\n");
	}
	else
	{
		printf("\t\tAns is: %d\n", iResult);
	}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	OUTPUT: 
//				Enter First No: 25
//				Enter Second No : 5
//				Ans is : 5
//
//				Enter First No: 5
//				Enter Second No : 25
//				ERROR_INVALIDE_2nd_INPUT
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
