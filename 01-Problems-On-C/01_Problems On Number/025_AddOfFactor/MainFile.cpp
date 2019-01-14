#include<stdio.h>
void DisplayComFactorLarge(int iNo)
{
	if(iNo==0)
	{
		return ;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iCnt=0;int sum=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
			if((iNo%iCnt)==0)
			{
				sum=sum+iCnt;		
			}				
	}
		printf("\t\t%d ",sum);
}
int main(int argc, char* argv[])
{
	int iNum = 0;
	printf("Enter The No: ");
	scanf("%d", &iNum);
	
	DisplayComFactorLarge(iNum);

	return 0;
}
