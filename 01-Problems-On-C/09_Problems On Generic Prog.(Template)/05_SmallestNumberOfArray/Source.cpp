#include<iostream>
#include<malloc.h>

using namespace std;

template <class T>

T SmallestNo(T iBrr[], int iSize)
{
	if((iBrr == NULL) || (iSize < 0))
		{
			printf("\nArray OR Size Not Allocated\n");
			return NULL;		
		}	
	int i =0;
	T iMax = iBrr[0];
	
	for(i=0;i<iSize;i++)
		{
			if(iBrr[i] < iMax)
				{
					iMax = iBrr[i];
				}
		}
	return iMax;
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
	iRet = SmallestNo(iArr,iLength);
	printf("\nSmallest Element is : %d",iRet);
	
	return 0;
}
