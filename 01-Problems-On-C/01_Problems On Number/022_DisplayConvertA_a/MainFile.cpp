//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayConvert(char CValue)
{
	if (CValue >= 65 && CValue <= 90)
	{
		printf("%c\t", CValue + 32);
	}
	else if (CValue >= 97 && CValue <= 122)
	{
		printf("%c\t", CValue - 32);
	}
}

int main(int argc, char*argv[])
{
	char ch = '\0';
	printf("Enter The Character: ");
	scanf_s("%c", &ch);
	DisplayConvert(ch);
	return 0;
}