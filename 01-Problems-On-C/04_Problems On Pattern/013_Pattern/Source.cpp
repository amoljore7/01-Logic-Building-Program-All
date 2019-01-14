#include<stdio.h>
void Pattern(int iNum)
{
	int i=0;
	char ch=64;
	if( iNum < 0 )
		{
			iNum=-iNum;
		}
	for(i=1;i<=iNum;i++)
		{
			ch=ch+1;
			printf("%c ",ch);
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
