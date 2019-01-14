#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int BOOL;

BOOL ChkDigit(BOOL ch)
{
	if(NULL == ch)
		{
			return -1;
		}
	if((ch>=0) && (ch<=9))
		{
			return TRUE;
		}
	else
	{
		return FALSE;
	}
}
int main(int argc, char* argv[])
{
	char Digit=0;
	char cRet='\0';
	
	printf("\t\tEnter Character:\t");
	scanf("%d",&Digit);
	cRet = ChkDigit(Digit);
	printf("\n");
	if(cRet == TRUE)
		{
			printf("\t\tTRUE\n");
		}
	else
		{
			printf("\t\tFALSE\n");
		}
	return 0;
}
