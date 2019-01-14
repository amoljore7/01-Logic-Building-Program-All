#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int  BOOL;

BOOL strcmpX(char *src,char *dest)
{
	if((NULL == src) || (NULL == dest))
		{
			return FALSE;
		}
	while((*src != '\0') && (*dest != '\0'))
		{
			if(*src != *dest)
				{
					break;
				}
			src++;
			dest++;
		}
	if((*src=='\0')&&(*dest=='\0'))
		{
			return TRUE;
		}
	else
		{
			FALSE;
		}
}
int main(int argc,char* argv[])
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	BOOL iRet=TRUE;
	
	printf("\t\tEnter Fisrt String: ");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	printf("\t\tEnter Second String: ");
	scanf("%[^'\n']s",brr);	
	printf("\n");
	 
	iRet=strcmpX(arr,brr);
	if(iRet==TRUE)
		{
			printf("\t\tBoth the String Equal ");
		}
	else
		{
			printf("\t\tBoth the String NOT Equal ");
		}
} 
