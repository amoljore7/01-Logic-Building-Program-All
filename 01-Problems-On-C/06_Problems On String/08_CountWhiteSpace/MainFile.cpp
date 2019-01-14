#include<stdio.h>
 
int CountWhiteSpace(char *Str)
{
	if(Str == NULL)
		{
			return -1;		
		}	
	int iCnt=0;
	int iCount=0;
	
	while(Str[iCnt] != '\0')
		{
			if (Str[iCnt] == ' ')
				{
					iCount++;
				}
			Str++;
		}
		return iCount;
}
int main(int argc, char* argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("\t\tEnete String : ");
	scanf("%[^'\n']s",Str);
	
	iRet=CountWhiteSpace(Str);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;	
		}	
	else
		{
			printf("\t\tWhite Space Occuress -> %d\tTime",iRet);
			
		}
	return 0;
} 
