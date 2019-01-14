#include<stdio.h>
void Pattern(int iNo)
{
	
	if(iNo<0)
		{
			iNo=-iNo;
		}
	int i=0,iCnt=0,iDigit=0,iRev=0;

	while(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=10*iRev+iDigit;
			iNo=iNo/10;
			iCnt++;		
		}
		int j=iRev;
	while(i<iCnt)
	{
		while(iRev!=0)
			{
				iDigit=iRev%10;
				printf("%d ",iDigit);
				iRev=iRev/10;
			}
			iRev=j;
		printf("\n");
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

