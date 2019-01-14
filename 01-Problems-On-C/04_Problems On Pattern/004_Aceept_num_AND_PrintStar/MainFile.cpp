//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Accept(int iNo)
{
	while (iNo>0)
	{
		printf("*\t");
		iNo--;
	}
}
int main(int argc, char* argv[])
{
	int iValue = 0;
	printf("Enter The No: ");
	scanf_s("%d", &iValue);

	Accept(iValue);
	return 0;
}