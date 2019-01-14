#include<stdio.h>
void Pattern(int iNo)
{
	
	if(iNo<0)
		{
			iNo=-iNo;
		}
	int i=0,iCnt=0,iDigit=0,iRev=0;
	int iNum=iNo;
	int iValue=iNo;
	while(iNo!=0)
		{
			iDigit=iNo%10;	
			iNo=iNo/10;	
			iCnt++;
			
		}
	while(i<iCnt)
	{
		while(iNum!=0)
		{
			
			iDigit=iNum%10;
			printf("%d ",iDigit);	
			iNum=iNum/10;		
		}
		printf("\n");
		iNum=iValue;
	i++;	
	}
		
}
int main(int argc,char *argv[])
{
	int iNum=0;
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&iNum);
	fflush(stdin);

	Pattern(iNum);
	
	return 0;
}

