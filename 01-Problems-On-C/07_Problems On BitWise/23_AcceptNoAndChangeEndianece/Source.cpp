#include<stdio.h>

#define TRUE	1
#define FALSE	0

typedef int UINT;

UINT SwapEndianece(UINT iNo)
{
	UINT No1,No2,No3,No4;
	UINT iResult=0;
	
	No1 = No1 & 0X000000FF;
	No2 = No2 & 0X0000FF00;
	No3 = No3 & 0X00FF0000;
	No4 = No4 & 0XFF000000;
	
	No1 = No1 << 24;
	No2 = No2 << 8;
	No3 = No3 >> 8 ;
	No4 = No4 >> 24;
	
	iResult = (No1 || No2 || No3 || No4 );
	return iResult;
}


int main(int argc, char *argv[])
{
	UINT iRet =0;
	UINT No = 0;
	printf("\t\tEnter Any Number : ");
	scanf("%d",&No);
	iRet=SwapEndianece(No);
	printf("%d ",iRet);
	return 0;
}
