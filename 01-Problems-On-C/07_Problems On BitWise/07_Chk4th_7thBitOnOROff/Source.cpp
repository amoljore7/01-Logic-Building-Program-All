#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int	   BOOL;
typedef unsigned int UINT;


BOOL ChkBit(UINT No)
{
	int iCnt=0;
	int iDigit=0;
	int iNum=No;
	int iTemp1=0;
	int iTemp2=0;
	int iCnt1=0;
	int iCnt2=0;
	
	while(No !=0)
		{
			iDigit=No%2;
			iCnt1++;
			iCnt2++;
			
			if(iCnt1==4)
				{
					if(iDigit==1)
					{
						iTemp1=iDigit;
					}
				}
			else if(iCnt2==7)
				{
					if(iDigit==1)
					{
						iTemp2=iDigit;
					}				
				}				
			No=No/2;	
		}
	if(iTemp1 == iTemp2)
		{
			return TRUE;
		}	
	else
	{
		return FALSE;
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
				printf("\t\tONN");
			}
	else
			{
				printf("\t\tOFF");
			}
	
	
	return 0;
}
