#include<stdio.h>

int CountWords(char *str)
{
	if(NULL == str)
		{
			return -1;
		}
	int iCnt=0;
	while(*str != '\0')
		{
			if(*str== ' ')
				{
					str++;
				}
			else if(*str != ' ')
				{
					if(*str == '\0')
						{
							break;
						}
					while( *str !=' ')
						{
							str++;
						}
					iCnt++;
				}
		}
		return iCnt;
}
	
int main(int argc, char* arhv[])
{
	char cArr[30]={'\0'};
	int  bRet=0;
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	
	printf("\n");
	bRet=CountWords(cArr);
	printf("\t\tWords Block In String is -> %d",bRet);
	
	return 0;
}
