#include<stdio.h>
void Pattern(int iNum)
{
	int i=0;
	char ch=64;
	char cch=0;
	if( iNum < 0 )
		{
			iNum=-iNum;
		}
	for(i=1;i<=iNum;i=i+2)
		{
			ch=ch+1;
			printf("%c ",ch);
			cch=ch+33;
			printf("%c ",cch);
			ch=ch+1;
			cch=ch+34;
			
		}
}
int main(int argc,char argv[])
{
	int iNo=0;
	printf("\t\tEnter Number: ");
	scanf("%d",&iNo);
	
	Pattern(iNo);
	
	return 0;
}
