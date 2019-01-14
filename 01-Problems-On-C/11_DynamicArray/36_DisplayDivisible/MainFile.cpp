#include<stdio.h>
#include<stdlib.h>

void DisplayDivisible(int *iArr,int iSize,int iNo)
{
	if((iArr==NULL) || (iSize<0))
		{
			return;
		}
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			if((iArr[iCnt] % iNo)==0)
				{
					printf("%d\t",iArr[iCnt]);
				}
		}
}
int main(int argc,char* argv[])
{
	int iCnt=0;
	int iLength=0;
	int *iBrr=NULL;
	int iNum=0;
	
	printf("\t\tEnter SIZE of Element: ");
	scanf("%d",&iLength);
	
	printf("\t\tEnter Divisible Element: ");
	scanf("%d",&iNum);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
			{
				return -1;
			}
	printf("\t\tEnter The Element: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
		{
			printf("\t\tEnter Element No: %d\t",iCnt+1);
			scanf("%d",&iBrr[iCnt]);
		}
		printf("\n\n");
		DisplayDivisible(iBrr,iLength,iNum);
		free(iBrr);
		return 0;
}
