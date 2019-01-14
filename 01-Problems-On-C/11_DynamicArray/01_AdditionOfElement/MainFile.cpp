#include<Stdio.h>
#include<stdlib.h>
int Add(int*,int);

int main(int argc,char* argv[])
{
	int *iBrr=NULL;
	int iLength=0;
	int i=0;
	int iRet=0;
	printf("\t\tEnter No.Of Element: ");
	scanf("%d",&iLength);

	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
		{
			printf("\t\tUnable To Allocate Memory");
			return -1;
		}
	printf("\t\tEnter Element: \n");
	
		for(i=0;i<iLength;i++)
		{
			scanf("%d",&iBrr[i]);
		}
	
	iRet=Add(iBrr,iLength);
	printf("\t\t Addition is %d \n",iRet);
	return 0;
}
int Add(int *iArr,int iSize)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+iArr[iCnt];
	}
	return iSum;
}
