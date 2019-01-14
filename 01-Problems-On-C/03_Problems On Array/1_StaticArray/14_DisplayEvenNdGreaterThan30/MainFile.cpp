#include<stdio.h>

void Display(int *iArr,int iSize,int iNo)
{
	int iCnt=0;
	if((iArr[iCnt]==NULL)||(iSize<0)||(iNo<0))
	{
		return;
	}
	
	printf("\t\tEven And Greatest Of Number %d is ->",iNo);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((iArr[iCnt]>iNo)&&(iArr[iCnt]%2==0))
		{
			printf(" %d ",iArr[iCnt]);
		}
	}
}
int main(int argc,char* argv[])
{
	int iSize=0;
	int iNo=0;
	int iCnt=0;
	
	printf("\t\tEnter Greatest Number: ");
	scanf("%d",&iNo);
	
	printf("\t\tEnter the Element of Array:\n");
	int iBrr[10]={0};
	
	for(iCnt=0;iCnt<10;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}

	Display(iBrr,10,iNo);
	
	return 0;
}
