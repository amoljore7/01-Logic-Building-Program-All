#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Palindrome(char *str)
{
	if(NULL == str)
		{
			return FALSE;
		}
	char *Start;
	char *End;
	char Temp;
	
	Start=str;
	End=str;
	
	while(*End != '\0')
	{
		End++;
	}
	End--;
	while(Start<=End)
		{
			if(	((*Start>='A')&&(*Start<='Z'))&&((*End>='a')&&(*End<='z')) )
				{
					*Start=*Start+32;
				}
			else if( ((*Start>='a')&&(*Start<='z'))&&((*End>='A')&&(*End<='Z')) )
				{
					*Start=*Start-32;
				}
			if(*Start != *End)
				{
					break;
				}
			Start++;
			End--;
		}
	if(Start>End)
		{
			return TRUE;
		}
	else
		{
			return FALSE;
		}
}
int main(int argc, char* arhv[])
{
	char cArr[30]={'\0'};
	BOOL bRet=TRUE;
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	printf("\n");
	bRet=Palindrome(cArr);
	printf("\n");
	if(bRet==TRUE)
		{
			printf("\t\tString is Palindrom\n");
		}
	else
		{
			printf("\t\tString is Not Palindrome\n");
		}
	return 0;
}
