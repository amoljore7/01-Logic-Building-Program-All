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
		printf("*\t$\t");
	}
}
int main(int argv,char* argc[])
{
	int iNum=0;
	printf("\t\tEnter Any Number: ");
	scanf("%d",&iNum);
	
	Pattern(iNum);
	
	return 0;
}
