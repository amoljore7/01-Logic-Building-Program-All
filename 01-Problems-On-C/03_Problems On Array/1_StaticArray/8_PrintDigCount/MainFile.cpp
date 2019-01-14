 #include<stdio.h>
void PrintDigCount(int *iArr,int iSize)
{
	int iCnt=0;
	int iTemp=0;

	printf("\t\t Printed Digit Count is -> ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		int iCount=0;
		iTemp=iArr[iCnt];
		while(iTemp!=0)
		{
			iTemp=iTemp/10;
			iCount++;
		}
		printf(" %d ",iCount);
	}
}
int main(int argc,char* argv[])
{
	
	printf("\t\tEnter Number:\n");
	int iBrr[10]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&iBrr[i]);
	}
	PrintDigCount(iBrr,10);
	return 0;
}
