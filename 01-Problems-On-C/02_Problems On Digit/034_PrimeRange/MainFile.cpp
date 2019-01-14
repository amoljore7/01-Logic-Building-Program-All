#include<stdio.h>

void PrimeRange(int iStart,int iEnd)
{
	if((iStart<0)||(iEnd<0))
	{
		iStart=-iStart;
		iEnd=-iEnd;
	}
	int ct=0;
	int i=2;
	for(iStart;iStart<iEnd;iStart++)
	{
			for(i=2;i<=iStart/2;i++)
			{
				if(iStart%i==0)
				{
					ct=1;
					break;
				}
			}
		if(ct==0)
		{
			printf("\t%d ",iStart);	
		}
	
		ct=0;
		
	}
}
int main(int argc,char* argv[])
{
	int iStart=0;
	int iEnd=0;
	printf("\t\tEnter the Starting Number: ");
	scanf("%d",&iStart);
	printf("\t\tEnter the Ending Number: ");
	scanf("%d",&iEnd);
	PrimeRange(iStart,iEnd);
	
return 0;
}
