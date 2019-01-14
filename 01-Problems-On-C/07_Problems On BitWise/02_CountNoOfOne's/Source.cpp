#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;

const char *cArr[]={"flase","true"};

int CountNoOfOne(UINT uNo)
{
	int iDigit=0;
	int iCnt=0;
	while(uNo!=0)
		{
			iDigit=uNo%2;
			if(iDigit==1)
				{
					iCnt++;
				}
			uNo=uNo/2;		
		}
	return iCnt;	
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	UINT iRet=0;
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	
	iRet=CountNoOfOne(uNum);
	
	printf("\t\tNumber Of One's is -> %u",iRet);
	return 0;
}
