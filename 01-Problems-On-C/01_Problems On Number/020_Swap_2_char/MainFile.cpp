
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// //
//  
//  This code demonstrate the to Swap Two charcter of that given number 
//  input       : Accept Two Character. 
//  output      : To Swap that TWo Characterr. 
//  Function Name: Main,Swap 
//  Creation Date:15 sept 2018 
//  Author: Amol Balasaheb Jore 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void swap(char *ptr1, char *ptr2)
{
	char temp = 0;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main(int argc, char *argv[])
{
	char ch1 = '\0', ch2 = '\0';
	printf("Enter First Character: ");
	scanf_s("%c", &ch1);
	printf("Enter Second Character: ");
	fflush(stdin);
	scanf_s("%c", &ch2);

	swap(&ch1, &ch2);
	printf("%c\t%c\t", ch1, ch2);
	return 0;
}