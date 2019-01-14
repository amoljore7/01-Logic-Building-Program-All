#include<stdio.h>
void DisplayFactor(int *iArr,int iSize)
{
	int iCnt=0;
	int jCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		for(jCnt=0;jCnt<iArr[iCnt];jCnt++)
		{
			if((iArr[iCnt]%2)==0)
			{
			printf(" * ");
			}
			else
			{
			printf(" $ ");
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