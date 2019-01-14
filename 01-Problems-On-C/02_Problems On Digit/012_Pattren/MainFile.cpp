#include<stdio.h>

void Pattern(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int i=0;
	int j=0;
	
	for(i=0;i<iNo;i++)
		{
		printf("*\t");
		}
	for(j=0;j<i;j++)
			{
				printf("#\t");	
			}
}
int main(int argv,char* argc[])
{
	int iNum=0;
	printf("\t\tEnter Any Nimber: ");
	scanf("%d",&iNum);
	
	Pattern(iNum);
	
	return 0;
}
