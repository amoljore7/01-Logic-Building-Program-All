#include<stdio.h>
#include<stdlib.h>

void ArrReverse(int *iArr,int iSize)
{
		if((iArr==NULL) || (iSize<0))
			{
			return ;		
			}	
		int iStart=0;
		int iEnd=iSize-1;
		int iTemp=0;
		int iCnt=0;
		
		while(iStart<=iEnd)
			{
				iTemp=iArr[iStart];
				iArr[iStart]=iArr[iEnd];
				iArr[iEnd]=iTemp;
				
		
			iStart++;
			iEnd--;	
			}	
	for(iCnt=0;iCnt<iSize;iCnt++)
			{
				printf(" %d\t",iArr[iCnt]);
			}
}
int main(int argc,char* argv[])
{
	int iLength=0;
	int iCnt=0;
	int *iBrr=NULL;
	
	printf("\t\tEnter the SIZE of Element: ");
	scanf("%d",&iLength);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
			{
				return -1;
			}
	printf("\t\tEnter Element:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
		{
			printf("\t\tEntered Element No: %d\t",iCnt+1);
			scanf("%d",&iBrr[iCnt]);
		}
		printf("\n\n");
		ArrReverse(iBrr,iLength);
		
		
		free(iBrr);
		return 0;
}
