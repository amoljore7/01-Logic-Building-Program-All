#include<stdio.h>

void Display(char ch)
{
	if(NULL == ch)
		{
			return ;
		}
	
	if((ch>='A')&&(ch<='Z'))
		{
			for(ch;ch<='Z';ch++)
				{
					fflush(stdin);
					printf("%c ",ch);
				}
		}
		
	else if((ch>='a')&&(ch<='z'))
		{
			for(ch;ch>='a';ch--)
				{
					fflush(stdin);
					printf("%c ",ch);
				}
		}
}
int main(int argc, char* argv[])
{
	char cChar1='\0';
	
	printf("\t\tEnter Character:\t");
	scanf("%c",&cChar1);
	
	Display(cChar1);
	return 0;
}
