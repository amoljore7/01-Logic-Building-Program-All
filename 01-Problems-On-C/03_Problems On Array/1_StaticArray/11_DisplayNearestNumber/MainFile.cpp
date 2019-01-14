#include<stdio.h>
void DisplayNearest(int *iArr,int iSize)
{
	int iDiff=0;
	int Near=900000;
	int iCnt=0;
	int iIndex=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iDiff=iArr[iCnt]-90;
		if(iDiff<0)
		{
			iDiff=-iDiff;
		}
		if(iDiff<iArr[iCnt])
		{
			Near=iDiff;
			iIndex=iCnt;
		}
	}
	printf("\t\tNearest Element is: %d",*(iArr+iIndex));
}
int main(int argc,char* argv)
{
	int iSize=0;
	int i=0;
		printf("\t\tEnter Element:\n");
	int iBrr[10]={0};
	for(i=0;i<10;i++)
	{
		scanf("%d",&iBrr[i]);
	}
	DisplayNearest(iBrr,10);
	
	return 0;
	 
}
