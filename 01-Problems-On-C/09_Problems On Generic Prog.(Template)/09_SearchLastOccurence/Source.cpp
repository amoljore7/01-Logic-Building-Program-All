#include<iostream>
#include<malloc.h>

using namespace std;

template <class T>

int Display( T *iBrr, int iSize,T iNum)
{
		if((iBrr == NULL) || (iSize < 0))
			{
				printf("\nPlz Enter Proper Input\n");
				return -1;	
			}	
		
		int i =0;
		int iCnt = iSize-1;
		
		for(i=iSize-1;i>0;i--)
			{
				
				if(iBrr[i]==iNum)
				{
					break;
				}
			iCnt--;
			}
	return iCnt;
}

int main(int argc,char* argv[])
{
	int iLength =0;
	int *iArr={0};
	int iCnt =0;
	int iRet = 0;
	int iNo =0;
	
	
	printf("\nEnter The Length of Araay: ");
	scanf("%d",&iLength);
	
	iArr = (int*)malloc(iLength * sizeof(int));
	
	printf("\nEnter Element in Array : \n");
	for(iCnt=0; iCnt<iLength;iCnt++)
	{
		printf("\nEnter Index No %d\t",iCnt);
		scanf("%d",&iArr[iCnt]);
	}
	printf("\nEnter No To Find Last Occurence : ");
	scanf("%d",&iNo);
	
	iRet = Display(iArr,iLength,iNo);
	printf("\nLast Occurence Of %d is Index No %d\n",iNo,iRet);
	return 0;
}
