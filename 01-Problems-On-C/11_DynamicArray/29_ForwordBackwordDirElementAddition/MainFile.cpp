#include<stdio.h>
#include<stdlib.h>

void Display(int *iArr, int iSize)
	{
		if((iArr==NULL) || (iSize<0))
		{
			printf("\t\tEnter Positive SIZE: ");
			return;
		}
		int iStart=0;
		int iEnd=0;
		for(iStart=0,iEnd=iSize-1;
			iStart < iEnd;
			iStart ++, iEnd -- )
			{
				
					printf("\t\tAddition is: %d\n",iArr[iStart] + iArr[iEnd]);
				
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

		Display(iBrr,iSize);
		free(iBrr);
	return 0;

	}