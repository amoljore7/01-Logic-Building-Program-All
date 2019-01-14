#include<stdio.h>

void Display(char ch, int iSize)
{
	if((ch == NULL) || (iSize < 0))	
		{
			return;
		}
	static int i = 0;
	
	if(i < iSize)
		{
			
			printf("%c\t",ch);
			i++;
			Display(ch,iSize);	
		}
}

int main(int argc, char* argv[])
{
	char ch = '0';
	int length = 0;
	printf("\nEnter The Charcter : ");
	scanf("%c",&ch);
	
	printf("\nEnter Size of Char : ");
	scanf("%d",&length);
	
	Display(ch,length);
	
	return 0;
}
