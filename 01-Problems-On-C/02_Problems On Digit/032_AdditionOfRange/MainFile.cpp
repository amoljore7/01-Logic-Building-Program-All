#include<stdio.h>

void AdditionRange(int iStart,int iEnd)
{
	if((iStart<0)||(iEnd<0))
	{
		iStart=-iStart;
		iEnd=-iEnd;
	}
	int temp=0;
	for(iStart;iStart<=iEnd;iStart++)
	{
		temp=temp+iStart;	
	}
	printf("\t\t%d",temp);
	
}
int main(int argc,char* argv[])
{
	int iStart=0;
	int iEnd=0;
	printf("\t\tEnter the Starting Number: ");
	scanf("%d",&iStart);
	printf("\t\tEnter the Ending Number: ");
	scanf("%d",&iEnd);
	AdditionRange(iStart,iEnd);
	
return 0;
}
