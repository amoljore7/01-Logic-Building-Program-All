#include<stdio.h>
#include<stdlib.h>

int ArrayDiffSum(int *iArr,int iSize1, int *iBrr, int iSize2)
{
	int iCnt=0;
	int iSum1=0;
	int iSum2=0;
	int iDiff=0;
	
	for(iCnt=0;iCnt<iSize1;iCnt++)
			{
				iSum1=iSum1+iArr[iCnt];
			}
	
	for(iCnt=0;iCnt<iSize2;iCnt++)
			{
				iSum2=iSum2+iBrr[iCnt];
			}
	iDiff = iSum1 - iSum2;
	if(iDiff<0)
		{
			iDiff=-iDiff;
		}
	return iDiff;

}
int main(int argc, char* argv[])
{
	int *iArr=NULL;
	int *iBrr=NULL;
	int iLength1=0;
	int iLength2=0;
	int iCnt=0;
	int iRet=0;
	
	printf("\t\tEnter Size Of First Array: ");
	scanf("%d",&iLength1);
	
	printf("\t\tEnter Size Of Second Array: ");
	scanf("%d",&iLength2);
	
	iArr=(int*)calloc(iLength1,sizeof(int));
		if(iArr==NULL)
		{
			return -1;
		}
	iBrr=(int*)calloc(iLength2,sizeof(int));
		if(iBrr==NULL)
		{
			return -1;
		}
	printf("\t\tEnter Element Of First Array:\n");
	for(iCnt=0;iCnt<iLength1;iCnt++)
		{
			printf("\t\tEmter Element No: %d\t",iCnt+1);
			scanf("%d",&iArr[iCnt]);
		}
		printf("\t\tEnter Element Of Second Array:\n");
	for(iCnt=0;iCnt<iLength2;iCnt++)
		{
			printf("\t\tEmter Element No: %d\t",iCnt+1);
			scanf("%d",&iBrr[iCnt]);
		}
	
		iRet=ArrayDiffSum(iArr,iLength1,iBrr,iLength2);
		printf("\n\n");
		printf("\t\tDiffernce Of Two Array Summation Is: %d\t",iRet);
		
		
	free(iArr);
	free(iBrr);
	return 0;
}
