#include<stdio.h>

int Frequncy(char *Str, char ch)
{
	if((NULL == Str) || ('\0'== ch))
		{
			return -1;
		}
	int iCnt=0;
	char cTemp = ch;
	
	if((ch >= 'A') && (ch <= 'Z'))
		{
			cTemp= ch + 32;
		}
	else if((ch >= 'a') && (ch <= 'z'))
		{
			cTemp = ch - 32;
		}
	
	while( *Str != '\0')
		{
			if (( *Str == ch) || ( *Str == cTemp))
				{
					iCnt++;
				}
			Str++;
		}
	return iCnt;
}
int main(int argc, char* argv[])
{
	int iRet=0;
	char cArr[30]={'\0'};
	char cInput='\0';
	printf("\t\tEnter String -> ");
	scanf("%[^'\n']s",cArr);
	printf("\n");
	
	fflush(stdin);
	printf("\t\tEnter Characte To Find freq. ->\t");
	scanf("%c",&cInput);
	
	iRet=Frequncy(cArr,cInput);
	printf("\n\n");
	printf("\t\tFrequncy Of Characte is -> %d\n",iRet);
	
	return 0;
}
