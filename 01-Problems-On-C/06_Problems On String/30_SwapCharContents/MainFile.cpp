#include<stdio.h>

void SwapX(char *p,char *q)
{
	if((NULL == p) ||(NULL == q))
		{
			return ;
		}
		char cTemp=0;
	if((*p>='A')&&(*p<='Z') && (*q>='A')&&(*q<='Z') )
		{
			cTemp=*p;
			*p=*q;
			*q=cTemp;
		}
	else if((*p>='a')&&(*p<='z') && (*q>='a')&&(*q<='z') )
		{
			cTemp=*p;
			*p=*q;
			*q=cTemp;
		}
}
int main(int argc, char* argv[])
{
	char cChar1='\0';
	char cChar2='\0';
	
	printf("\t\tEnter Second Character:\t");
	scanf("%c",&cChar1);
	fflush(stdin);
	printf("\t\tEnter First Character:\t");
	scanf("%c",&cChar2);
	
	SwapX(&cChar1,&cChar2);
	printf("\n");
	printf("\t\t%c\t%c\n",cChar1,cChar2);
	
	return 0;
}
