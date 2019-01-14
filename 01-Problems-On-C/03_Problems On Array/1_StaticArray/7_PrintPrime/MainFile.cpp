#include<stdio.h>
void PrintPrime(int *iArr,int iSize)
{
	int iCnt=0;
	int j=0;
	int flag=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		flag=1;
		for(j=iArr[iCnt]/2;j>=2;j--)
		{
			if((iArr[iCnt]%j)==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf(" %d ",iArr[iCnt]);
		}
		
	}
}
int main(int argc,char* argv[])
{

	
	int iBrr[10]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&iBrr[i]);
	}
	PrintPrime(iBrr,10);
	return 0;
}
