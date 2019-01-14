#include<iostream>
#include<malloc.h>

using namespace std;

template <class T>

T AddN(T iBrr[], int iSize)
{
	if((iBrr == NULL) || (iSize < 0))
		{
			printf("\nArray OR Size Not Allocated\n");
			return NULL;		
		}	
	int i =0;
	int iSum = 0;
	
	for(i=0;i<iSize;i++)
		{
			iSum = iSum + iBrr[i];
		}
	return iSum;
}

int main(int argc, char *argv[])
{
	int iCnt = 0;
	int iLength =0;
	int iRet = 0;
	
	int *iArr=NULL;
	printf("\nEnter Length Of Array : ");
	scanf("%d",&iLength);
	
	iArr = (int*)malloc(iLength * sizeof(int));
	
	printf("\nEnter Elemtn in array: \n");
	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
		printf("\nEnter Element No %d \t",iCnt+1);
		scanf("%d",&iArr[iCnt]);
	}
	iRet = AddN(iArr,iLength);
	printf("\nAddition Of Array Element is : %d",iRet);
	
	return 0;
}
