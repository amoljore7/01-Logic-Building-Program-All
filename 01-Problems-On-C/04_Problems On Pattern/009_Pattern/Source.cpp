#include<stdio.h>
void Pattern(int iNum1,int iNum2)
{
	int i=0;
	if( iNum1 < 0 )
		{
			iNum1=-iNum1;
		}
	if( iNum2 < 0 )
		{
			iNum2=-iNum2;
		}
	for(i=1;i<(iNum1 * iNum2);i=i+iNum2)
		{
			printf("%d  ",i);
		}
}
int main(int argc,char argv[])
{
	int iNo1=0;
	int iNo2=0;
	printf("\t\tEnter 1St Number: ");
	scanf("%d",&iNo1);
	
	printf("\t\tEnter 2nd Number: ");
	scanf("%d",&iNo2);
	
	Pattern(iNo1,iNo2);
	
	return 0;
}
