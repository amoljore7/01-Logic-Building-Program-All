#include<stdio.h>
 void Pattern(int iStart,int iEnd)
 {
 	if((iStart<0)||(iEnd<0))
 	{
 		iStart=-iStart;
		iEnd=-iEnd;	
	}
	int iCnt=0;
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			if((iCnt%2)==0)
			{
				printf("%d\t",iCnt);
			}
		}
 }
 
 int main(int argv,char* argc[])
{
	int iStart=0;
	int iEnd=0;
	
	printf("\t\tEnter The Start Number: ");
	scanf("%d",&iStart);
	printf("\t\tEnter The End Number: ");
	scanf("%d",&iEnd);
	
	Pattern(iStart,iEnd);
	
return 0;
}
