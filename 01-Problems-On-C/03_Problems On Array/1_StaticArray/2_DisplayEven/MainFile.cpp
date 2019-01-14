#include<stdio.h>

void DisplayEven(int *Arr,int iSize)
{
	int iCnt=0;
	printf("\tEven Number -> ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			printf(" %d ",Arr[iCnt]);
		}
	}
}
int main(int argc,char* argv[])
{

	int iBrr[10]={0};
	
	int iCnt=0;
	printf("\t\tEnter 10 Number:\n");
	for(iCnt=0;iCnt<10;iCnt++)
		{
			scanf("%d",&iBrr[iCnt]);
		}
	DisplayEven(iBrr,10);
	return 0;
}
