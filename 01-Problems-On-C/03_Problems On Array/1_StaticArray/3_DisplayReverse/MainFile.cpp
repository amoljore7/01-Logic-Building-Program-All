#include<stdio.h>

void DisplayReverse(int *Arr,int iSize)
{
	int Cnt=0;
	iSize--;
	printf("\tReverse Number -> ");
	for(iSize;iSize>=0;iSize--)
	{
		printf(" %d",Arr[iSize]);
	}
}
int main(int argc,char* argv[])
{
	
	int iBrr[10]={0};
	int iCnt=0;
	printf("\t\tEnter Number:\n");
		for(iCnt=0;iCnt<10;iCnt++)
		{
			scanf("%d",&iBrr[iCnt]);
		}
		DisplayReverse(iBrr,10);
		return 0;
}
