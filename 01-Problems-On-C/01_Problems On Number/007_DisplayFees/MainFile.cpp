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
	UINT iStd = 0;
	UINT iRet = 0;
	printf("**********WELCOME TO HIGHER SECONDARY SCHOOL**********\n\n");
	printf("\t\tEnter The Standard: \n");
	scanf_s("\t\t %d",&iStd);

	iRet = DisplayFees(iStd);

		if(iRet==0)
		{
			printf("\t\tError: invalide standard:\n");
		}
		else
		{
			printf("\t\tTotal Fees: %d\n", iRet);
		}
		return 0;
}