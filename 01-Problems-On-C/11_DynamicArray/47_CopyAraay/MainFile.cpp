#include<stdio.h>
#include<stdlib.h>

int *CopyAraay(int *iArr1, int iSize1)
	{
		if( (iArr1 == NULL) || (iSize1 < 0) )
			{
				return NULL;
			}
		int iCnt=0;
		int iSize=iSize1 ;
		int *Araay=NULL;
		
		Araay=(int*)malloc(iSize * sizeof(int));
				if((Araay == NULL) || (iSize < 0))
				{
					return NULL;
				}	
		for(iCnt=0;iCnt<iSize;iCnt++)
			{
				Araay[iCnt] = iArr1[iCnt];
			}
		return Araay;
	}
	
int main(int argc, char* argv[])
{
	int *iBrr1=NULL;
	int *iPtr=NULL;
	int iLength1=0;
	
	int iCnt=0;
	
	printf("\t\tEnter SIZE of First Array: ");
	scanf("%d",&iLength1);
	
	
	iBrr1=(int*)calloc(iLength1,sizeof(int));
	
		if((iBrr1) == NULL)
				{
					return -1;
				}
	printf("\n\n");
	printf("\t\tEnter Element Of Array:\n");
	for(iCnt=0;iCnt<iLength1;iCnt++)
		{
			printf("\t\tElement No: %d\t",iCnt+1);
			scanf("%d",&iBrr1[iCnt]);
		}
	
	printf("\n\n");
	iPtr=CopyAraay(iBrr1,iLength1);
	
	printf("\t\tArray Copy -> ");
		for(iCnt=0;iCnt<iLength1;iCnt++)
			{
				printf("%d ",iPtr[iCnt]);
			}
	
		
	free(iBrr1);
	free(iPtr);
	
return 0;
	
}
