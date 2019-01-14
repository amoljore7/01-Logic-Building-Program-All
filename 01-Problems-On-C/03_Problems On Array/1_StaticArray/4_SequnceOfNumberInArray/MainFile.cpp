#include<stdio.h>
void Frequency(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;		
	}	
	int iArr[10]={0};
	int iDigit=0;
	int iCnt=0;
	while(iNo!=0)
	{
	 	iDigit=iNo%10;
	 	iArr[iDigit]++;
	 	iNo=iNo/10;
	
	}
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<iArr[i];j++)
		{
			if(iArr[i]!=0)
			{
				printf("%d ",i);
			}
			
		}
	}
	

}
int main(int argc,char* argv[])
{
	int iNum=0;
	printf("\t\tEnter A Number to Find Sequenc: ");
	scanf("%d",&iNum);
	
	Frequency(iNum);
	return 0;
}
