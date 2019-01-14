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
	int iAge = 0;
	int RetAge = 0;
	printf("\t\tEnter The Age:\t");
	scanf_s("%d", &iAge);

	RetAge = DisplayPrimiam(iAge);

	if (RetAge == ERROR_AGE)
	{
		printf("\t\tERROR: Please Enter Valide Age: \n");
	}
	else
	{
		printf("\t\tPrimiam Of Person Is: %d\n",RetAge);
	}

	return 0;

}