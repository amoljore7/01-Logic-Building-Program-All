#include<iostream>
#include<malloc.h>

using namespace std;

template <class T>

void Display( T *iBrr, int iSize)
{
		if((iBrr == NULL) || (iSize < 0))
			{
				printf("\nPlz Enter Proper Input\n");
				return ;	
			}	
		iSize--;
		int i =0;
		printf("\n\n\tArray Reverse\t");
		for(iSize;iSize>0;iSize--)
			{
				printf("%d\t",iBrr[iSize]);	
			}
	
}

int main(int argc,char* argv[])
{
	int iLength =0;
	int *iArr={0};
	int iCnt =0;
	int iRet = 0;
	
	
	printf("\nEnter The Length of Araay: ");
	scanf("%d",&iLength);
	
	iArr = (int*)malloc(iLength * sizeof(int));
	
	printf("\nEnter Element in Array : \n");
	for(iCnt=0; iCnt<iLength;iCnt++)
	{
		printf("\nEnter Index No %d\t",iCnt);
		scanf("%d",&iArr[iCnt]);
	}
	
	Display(iArr,iLength);
	
	return 0;
}
