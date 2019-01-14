#include<stdio.h>
void Pattern(int iNo)
{
	
	if(iNo<0)
		{
			iNo=-iNo;
		}
	int i=0,j=0,iCnt=0,iDigit=0,iRev=0,k=1;
	int iNum=iNo;
	int iValue=iNo;
	while(iNo!=0)
		{	
			iNo=iNo/10;	
			iCnt++;
			
		}
		
	for(i=1;i<=iCnt;i++)
		{
			iNum=iValue;
			for(j=1;j<=iCnt;j++)
				{
					iDigit=iNum%10;
					if(i==1||i==iCnt||j==1||j==iCnt)
					{
						printf("%d ",iDigit);	
					}
					else
					{
						printf("0 ");	
					}
				
					iNum=iNum/10;
				}
		
			printf("\n");
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

