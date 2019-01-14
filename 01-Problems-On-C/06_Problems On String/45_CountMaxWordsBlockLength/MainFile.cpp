#include<stdio.h>

int CountWords(char *str)
{
	if(NULL == str)
		{
			return -1;
		}
	int iCnt1=0;
	int iCnt2=0;
	int Max=0;
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
							iCnt2++;
							str ++;
							if(*str=='\0')
							{
								break;
							}
											
						}
					iCnt1++;
						if(iCnt2 > Max)
						{
								Max = iCnt2;	
						}
						iCnt2=0;
				}
				
				
		}
		return Max;
}
	
int main(int argc, char* arhv[])
{
	char cArr[100]={'\0'};
	int  bRet=0;
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	
	printf("\n");
	bRet=CountWords(cArr);
	printf("\t\tMax Words Block In String is -> %d\n",bRet);
	
	return 0;
}
