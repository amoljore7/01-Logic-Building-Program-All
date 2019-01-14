#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if(NULL == ch)
		{
			return -1;
		}
	if((ch>='A')&&(ch<='Z') || (ch>='a')&&(ch<='z'))
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
	cRet = ChkAlpha(cChar);
	printf("\n");
	if(cRet == TRUE)
		{
			printf("\t\tTRUE\tIt is Alphabet\n");
		}
	else
		{
			printf("\t\tFALSE\tIt is NOT Alphabet\n");
		}
	return 0;
}
