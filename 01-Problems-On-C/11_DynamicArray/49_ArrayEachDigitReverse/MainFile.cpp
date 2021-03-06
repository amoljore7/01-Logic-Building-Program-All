#include<stdio.h>
#include<stdlib.h>

void ArrayReverse(int *iArr,int iSize)
{
		if((iArr == NULL) || (iSize < 0))
			{
				return;
			}
	int iCnt=0;
	int iDigit=0;
	int iTemp=0;
	int iRev=0;
	
	printf("\t\tReverse Digit is -> ");
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			iTemp=iArr[iCnt];
			while(iTemp!=0)
				{
					iDigit=iTemp%10;
					iRev=iRev*10+iDigit;
					iTemp=iTemp/10;
				}
			printf(" %d ",iRev);
			iRev=0;
		}
}
int main(int argc,char *argv[])
{
	int *iBrr=NULL;
	int iLength=0;
	int iCnt=0;
	
	printf("\t\tEnter SIZE Of Element: ");
	scanf("%d",&iLength);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr == NULL)
			{
				return -1;
			}
	printf("\t\tEnter Element: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("\t\tEnter Element No. %d\t",iCnt+1);
		scanf("%d",&iBrr[iCnt]);
	}
	ArrayReverse(iBrr,iLength);
	
	free(iBrr);
	
	return 0;
}
