#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if(NULL == ch)
		{
			return -1;
		}
	if((ch>='A')&&(ch<='Z'))
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
	char cChar='\0';
	char cRet='\0';
	
	printf("\t\tEnter Character:\t");
	scanf("%c",&cChar);
	cRet = ChkCapital(cChar);
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
