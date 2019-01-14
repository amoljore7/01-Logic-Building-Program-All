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
		int iCnt = 0;
		
		for(i=0;i<iSize;i++)
			{
				iCnt++;
				if(iBrr[i]==iNum)
				{
					break;
				}
			
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
	
	printf("\nEnter Element in Array : ");
	for(iCnt=0; iCnt<iLength;iCnt++)
	{
		printf("\nEnter Element No %d\t",iCnt+1);
		scanf("%d",&iArr[iCnt]);
	}
	printf("\nEnter No To Find First Occurence : ");
	scanf("%d",&iNo);
	
	iRet = Display(iArr,iLength,iNo);
	printf("\nFirst Occurence Of %d is Possition %d\n",iNo,iRet);
	return 0;
}
