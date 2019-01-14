#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int	   BOOL;
typedef unsigned int UINT;


int CountBit(UINT No)
{
	int iCnt=0;
	int iDigit=0;
	
	
	while(No !=0)
		{
			iDigit=No%2;
			if(iDigit==0)
			{
				iCnt++;	
			}
									
			No=No/2;	
		}
	return iCnt;
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	BOOL iRet=TRUE;	
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	iRet=CountBit(uNum);
	
	printf("\t\tCount Of OFF Bit's is -> %d\n",iRet);
	
	return 0;
}
