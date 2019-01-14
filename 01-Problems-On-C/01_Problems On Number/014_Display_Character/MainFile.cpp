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
	char cChar = 0;
	printf("\t\tEnter The Character:\t");
	scanf_s("%c", &cChar);

	Display(cChar);

	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	OUTPUT: 
//		                Enter The Character:    D
//              		Entered Character is: D      	 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////