#include<stdio.h>
#include<malloc.h>

void FactorR(int iNo)
	{
		if(iNo < 0)
			{
				return;
			}
		static int iCnt = 1;
		
		if(iCnt < iNo)
			{
				if((iNo % iCnt) == 0)
					{
						printf("%d ",iCnt);	
					}
				iCnt++;
				FactorR(iNo);
			}
	}
int main(int argc, char *argv[])
	{
		int i=0;
		
		printf("\nEnter Number to Find Factor: ");
		scanf("%d",&i);
		
		FactorR(i);
		
		return 0;
	}
