#include<stdio.h>

int CountOfCharcter(char *cStr)
{
	if	( cStr == NULL )
		{
			return -1;
		}
	int iCount=0;
	
	while(*cStr != '\0')
		{
			iCount++;	
			cStr++;
		}
	return iCount;
}
int main(int argc, char* argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("\t\tEnter Any String  :\t\t");
	scanf("%[^'\n']s",Str);
	fflush(stdin);
	printf("\n");
	
	
	iRet=CountOfCharcter(Str);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;
		}
	else
		{
			printf("\t\tNo.Of Character In String -> %d \n",iRet);
			return 0;
		}
	
}
