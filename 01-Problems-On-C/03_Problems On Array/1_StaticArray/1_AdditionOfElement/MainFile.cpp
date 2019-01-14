#include<Stdio.h>
int Add(int*,int);

int main(int argc,char* argv[])
{
	int iBrr[10]={0};
	int i=0;
	int iRet=0;
	printf("\t\tEnter 10 Element:\n");
	
		for(i=0;i<10;i++)
		{
			scanf("%d",&iBrr[i]);
		}
	
	iRet=Add(iBrr,10);
	printf("\t\t Addition is %d ",iRet);
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
