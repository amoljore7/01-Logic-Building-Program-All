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
	printf("\t\tEnter The Number: ");
	scanf_s("%d", &iNum);

	Display(iNum);
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	OUTPUT: 
//		                 Enter The Number: 5
//                			Hello  
//						 Enter The Number: 15
//                			Demo 	 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
