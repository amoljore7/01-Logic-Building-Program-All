#include<stdio.h>
#include<stdlib.h>

void DisplayPair(int *iArr, int iSize)
	{
		if((iArr==NULL) || (iSize<0))
		{
			printf("\t\tEnter Positive SIZE: ");
			return;
		}
		int iCnt=0;
		int iSum=0;
		int iEnd=iSize-1;
		
		for(iCnt=0;iCnt<iSize/2;iCnt++)
			{
				iSum=0;
				iSum=iArr[iCnt] + iArr[iEnd];
				printf("\t\t%d\n",iSum);
				iEnd--;
			}
		
	}
int main(int argc, char* argv[])
	{
		int *iBrr=NULL;
		int iSize=0;
		int iCnt=0;

		printf("\t\tEnter the Size Of Array: ");
		scanf("%d",&iSize);

		iBrr=(int*)calloc(iSize,sizeof(int));
		if(iBrr==NULL)
		{
		printf("\t\tUnable to Allocate Memory: ");
		return -1;
		}
		printf("\t\tEnter The Element: \n");
		for(iCnt=0;iCnt<iSize;iCnt++)
			{
				printf("\t\tEnter Element No %d:\t",iCnt+1);
				scanf("%d",&iBrr[iCnt]);
			}

		DisplayPair(iBrr,iSize);
		free(iBrr);
	return 0;

	}