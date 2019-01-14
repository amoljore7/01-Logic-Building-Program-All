#include<stdio.h>
#include<malloc.h>

int CountR(int iArr[],int iSize)
	{
		if((iArr == NULL) || (iSize < 0))
			{
				return -1;
			}
		static int iSum =0;
		static int iCnt =0;
		
		if(iCnt < iSize)
			{
				iSum = iSum + iArr[iCnt];
				iCnt++;
				CountR(iArr,iSize);
					
			}
		return iSum;
	}
int main(int argc, char *argv[])
	{
		int iRet = 0;
		int i=0;
		int iLength = 0;
		int *iArr = NULL;
		
		printf("\nEnter Length of Array: ");
		scanf("%d",&iLength);
		
		iArr = (int*)malloc(iLength * sizeof(int));
		
		for(i=0;i<iLength;i++)
		{
			printf("\nEnter Element No : %d\t",i+1);
			scanf("%d",&iArr[i]);
		}
	
		
		iRet = CountR(iArr,iLength);
		printf("\nAddition of Array is = %d",iRet);
		
		return 0;
	}
