//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"myHeader.h"

int main()
{
	int iTotal = 0;
	int iObt = 0;

	printf("Enter Total Marks: \n");
	scanf_s("%d", &iTotal);

	printf("Enter Obtained Marks: \n");
	scanf_s("%d", &iObt);

	DisplayClass(iTotal, iObt);

	return 0;
}