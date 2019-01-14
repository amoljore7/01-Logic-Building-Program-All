#include<stdio.h>

void Display(char ch)
{
	if(NULL == ch)
		{
			return ;
		}
	printf("\n\n");
	if((ch>='A')&&(ch<='Z'))
		{
			printf("\t\tDecimal\tChar\tHex\n");
			printf("\t\t%d\t%c\t%x\n",ch,ch,ch);
		}
	else if((ch>='a')&&(ch<='z'))
		{
			printf("\t\tDecimal\tChar\tHex\n");
			printf("\t\t%d\t%c\t%x\n",ch,ch,ch);	
		}
	else
		printf("\t\tEnter Character Only\n");
}
int main(int argc, char* argv[])
{
	char SplSym='0';
	
	printf("\t\tEnter Character:\t");
	scanf("%c",&SplSym);
	Display(SplSym);
	
	return 0;
}
