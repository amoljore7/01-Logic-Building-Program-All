#include<stdio.h>
#include<stdlib.h>

void DisplayNaibers(int *iArr, int iSize)
	{
		if((iArr==NULL) || (iSize<2))
		{
			printf("\t\tEnter Positive SIZE: ");
			return;
		}
		int iCnt=0;
		for(iCnt=1;iCnt<iSize-1;iCnt++)
			{
				if ( ( iArr[iCnt-1] + iArr[iCnt+1])  == iArr[iCnt] )
				{
					printf("\t\t\t\t\tOutput is : %d\t%d -> %d\n",iArr[iCnt-1], iArr[iCnt+1],iArr[iCnt]);
				}
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

		DisplayNaibers(iBrr,iSize);
		free(iBrr);
	return 0;

	}