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
		int iValue1 = 0, iValue2 = 0, iValue3 = 0;
		int iResult = 0;
		printf("Enter Any Three Number: \n");
		scanf_s("%d%d%d", &iValue1, &iValue2, &iValue3);
			
		iResult = Max(iValue1, iValue2, iValue3);

		printf("Maximum Number is = %d\n", iResult);

		return 0;
	}