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
	int iNum = 0;
	int iRet = 0;
	printf("Enter The Number: ");
	scanf_s("%d", &iNum);

	iRet= SumRange(iNum);
	if (iRet == -1)
	{
		printf("Please Enter Valide Input: \n");
	}

	return 0;
}