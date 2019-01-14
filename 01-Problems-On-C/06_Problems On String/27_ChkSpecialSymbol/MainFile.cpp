#include<stdio.h>
#define TRUE	1
#define FALSE	0
typedef int BOOL;

BOOL ChkSpecial(BOOL ch)
{
	if(NULL == ch)
		{
			return -1;
		}
	if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='^')||(ch=='*')||(ch=='&'))
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
	char SplSym=0;
	char cRet='\0';
	
	printf("\t\tEnter Character:\t");
	scanf("%c",&SplSym);
	cRet = ChkSpecial(SplSym);
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
