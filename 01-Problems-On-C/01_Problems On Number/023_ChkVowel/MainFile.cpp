//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void ChkVowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i' || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I')
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}
int main(int argc, char* argv[])
{

	char ch = 0;
	printf("Enter The Charactor : ");
	scanf_s("%c", &ch);

	ChkVowel(ch);
	return 0;
}