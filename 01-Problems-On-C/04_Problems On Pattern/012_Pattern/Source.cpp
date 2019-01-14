#include<stdio.h>
void Pattern(int iNum)
{
	int i=0;
	if( iNum < 0 )
		{
			iNum=-iNum;
		}
	for(i=-iNum;i<=iNum;i++)
		{
			printf("%d  ",i);
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
