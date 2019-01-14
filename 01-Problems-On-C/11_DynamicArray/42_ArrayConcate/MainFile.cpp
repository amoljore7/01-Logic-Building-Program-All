#include<stdio.h>
#include<stdlib.h>

int *ArrayConcate(int *iArr1, int iSize1, int *iArr2, int iSize2)
	{
			if( ((iArr1 || iArr2) == NULL) || ((iSize1 || iSize2) < 0) )
			{
				return NULL;
			}
		int iCnt=0;
		int iCount=0;	
		int *iConcate=NULL;
		int inwSize=iSize1 + iSize2;
		
		iConcate=(int*)calloc(inwSize,sizeof(int));
			if(iConcate == NULL)
				{
					return NULL;
				}
		for(iCnt=0;iCnt<iSize1;iCnt++)
			{
				iConcate[iCnt] = iArr1[iCnt];
			}
		for(iCount=0;iCnt<inwSize;iCnt++,iCount++)
			{
				iConcate[iCnt] = iArr2[iCount];
			}
			
			return iConcate;
	}
	
void Display(int *iCrr, int iSize)
	{
		int iCnt=0;
		printf("\t\tTwo Araay Combination OF Contents is ->\n");
		for(iCnt=0;iCnt<iSize;iCnt++)
			{
				printf("%d\t",iCrr[iCnt]);
			}
	}

int main(int argc, char* argv[])
{
	int *iBrr1=NULL;
	int *iBrr2=NULL;
	int iLength1=0;
	int iLength2=0;
	int *iPtr=NULL;
	
	int iCnt=0;
	
	printf("\t\tEnter SIZE of First Array: ");
	scanf("%d",&iLength1);
	printf("\t\tEnter SIZE of Second Array: ");
	scanf("%d",&iLength2);
	
	iBrr1=(int*)calloc(iLength1,sizeof(int));
	iBrr2=(int*)calloc(iLength2,sizeof(int));
	
		if((iBrr1 || iBrr2) == NULL)
				{
					return -1;
				}
	printf("\n\n");
	printf("\t\tEnter Element Of First Array:\n");
	for(iCnt=0;iCnt<iLength1;iCnt++)
		{
			printf("\t\tElement No: %d\t",iCnt+1);
			scanf("%d",&iBrr1[iCnt]);
		}
	printf("\n\n");
	printf("\t\tEnter Element Of Second Array:\n");
	for(iCnt=0;iCnt<iLength2;iCnt++)
		{
			printf("\t\tElement No: %d\t",iCnt+1);
			scanf("%d",&iBrr2[iCnt]);
		}
	printf("\n\n");
	iPtr=ArrayConcate(iBrr1,iLength1,iBrr2,iLength2);
	
	Display(iPtr, iLength1 + iLength2);
	
	free(iBrr1);
	free(iBrr2);
	free(iPtr);
	
return 0;
	
}
