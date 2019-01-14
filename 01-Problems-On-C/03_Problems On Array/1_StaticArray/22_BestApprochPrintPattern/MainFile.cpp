#include<stdio.h>
void DisplayFactor(int *iArr,int iSize)
{
	int iCnt=0;
	int jCnt=0;
	int iDigit=0;
	for(iCnt=1;iCnt<=iSize;iCnt++)
	{
		iDigit=iArr[iCnt]%2;
		for(jCnt=1;jCnt<=iArr[iCnt];jCnt++)
		{
			switch(iDigit)
			{
			case 0:
				printf("*\t");
				break;
			case 1:
				printf("$\t");
				break;
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