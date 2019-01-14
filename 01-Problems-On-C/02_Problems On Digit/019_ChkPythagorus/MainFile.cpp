#include<stdio.h>
typedef int BOOL;
#define  TRUE 0
#define FALSE 1

BOOL ChkPythagorus(int iNo1,int iNo2,int iNo3)
{
	int iValue	=((iNo1) ^ 2 +(iNo2) ^ 2);
	int iValueX	=(iNo3) ^ 2;
	if(iValue==iValueX)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main(int argc,char* argv[])
{
	int iNum1=0;
	int iNum2=0;
	int iNum3=0;
	BOOL iRet=TRUE;
	printf("\t\tEnter iNum1: ");
	scanf("%d",&iNum1);
	printf("\t\tEnter iNum2: ");
	scanf("%d",&iNum2);
	printf("\t\tEnter iNum3: ");
	scanf("%d",&iNum3);
	
	iRet=ChkPythagorus(iNum1,iNum2,iNum3);
	if(iRet==TRUE)
	{
		printf("\t\tTRUE ");
	}
	else
	{
		printf("\t\tFALSE ");
	}
	return 0;
}
