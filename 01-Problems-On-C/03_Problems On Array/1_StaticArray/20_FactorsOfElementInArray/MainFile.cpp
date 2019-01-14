#include<stdio.h>
void DisplayFactor(int *iArr,int iSize)
{
	int iCnt=0;
	int jCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	printf("\t\tFactor OF %d->\t",iArr[iCnt]);
		for(jCnt=1;jCnt<=iArr[iCnt];jCnt++)
		{
			if((iArr[iCnt]%jCnt)==0)
			{
			printf(" %d ",jCnt);
			}
		}
		printf("\n");
	}
}
int main(int argc,char* arhv[])
{
int iBrr[5];
int iCnt=0;
int iSize=0;
printf("\t\tEnter 5 Element:\n");
for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&iBrr[iCnt]);
	}
	DisplayFactor(iBrr,5);
	return 0;
}