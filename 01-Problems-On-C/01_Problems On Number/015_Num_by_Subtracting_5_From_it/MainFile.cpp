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
	int iResult = 0;
	printf("\t\tEnter The Number: ");
	scanf_s("%d", &iNum);

	iResult=subtract(iNum);
	printf("\t\tSubtraction is:%d\n", iResult);

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	OUTPUT: 
//		                Enter The Number: 50
//              		Subtraction is:45    	 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////