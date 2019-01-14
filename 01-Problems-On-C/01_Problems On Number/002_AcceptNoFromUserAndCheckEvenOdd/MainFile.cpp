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
	int iValue = 0;
	int bResult = 0;
	printf("Enter Any Number: \n");
	scanf_s("%d", &iValue);

	bResult = chkEvenOdd(iValue);
	
		if(bResult==1)
		{
			printf("Number Is Even\n");
		}
		else
		{
			printf("Number is Odd\n");
		}
	return 0;
}