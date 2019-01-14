#include<stdio.h>
void Pattern(int iNum)
{
	int i=0;
	if( iNum < 0 )
		{
			iNum=-iNum;
		}
	for(i=1;i<(iNum*2);i=i+2)
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
