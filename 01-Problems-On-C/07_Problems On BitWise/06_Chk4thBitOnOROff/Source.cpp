#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;


BOOL ChkBit(UINT No)
{
	int iCnt=0;
	int iDigit=0;
	
	while(No !=0)
		{
			iDigit=No%2;
			iCnt++;
			
			if(iCnt==4)
				{
					if(iDigit==1)
						{
							return TRUE;		
						}		
				}
			No=No/2;	
		}	
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	BOOL iRet=TRUE;	
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	iRet=ChkBit(uNum);
	
	if(iRet == TRUE)
			{
				printf("\t\tTRUE");
			}
	else
			{
				printf("\t\tFLASE");
			}
	
	
	return 0;
}
