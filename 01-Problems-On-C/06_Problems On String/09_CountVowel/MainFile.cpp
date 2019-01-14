#include<stdio.h>

int CountVowel(char *Str)
{
	if(Str == NULL)
		{
			return -1;
		}
	int iCount=0;
	int iCnt=0;
	
	while(Str[iCnt] != '\0')
		{
		
		if(Str[iCnt] == 'a' ||Str[iCnt] == 'e' ||Str[iCnt] == 'i' ||Str[iCnt] == 'o' ||Str[iCnt] == 'u' ||Str[iCnt] == 'A' ||Str[iCnt] == 'E' ||Str[iCnt] == 'I' ||Str[iCnt] == 'O' ||Str[iCnt] == 'U' )
				{
					iCount=iCount+1;
				}
			Str++;
		}
	return iCount;
}
int main(int argc,char*argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("\t\tEnter Alphabet : ");
	scanf("%[^'\n']s",Str);
	fflush(stdin);
	
	iRet=CountVowel(Str);
	printf("\n\n");
		if(iRet == -1)
			{
				printf("\t\tInvalide Input: ");
				return -1;
			}
		else
			{
				printf("\t\tTotal Vowel In String is -> %d\t",iRet);
			}
	return 0;
}
