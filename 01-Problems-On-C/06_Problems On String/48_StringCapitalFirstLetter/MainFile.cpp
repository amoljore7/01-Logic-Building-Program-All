#include<stdio.h>

void StrCapitalFirstLetter(char *str)
{
	if(NULL == str)
		{
			return;
		}
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
							if(*str == '\0')
										{
											break;
										}
							if((*str>='a')&&(*str<='z'))
								{
									*str=*str-32;
								}
								while( *str !=' ')
								{
										str++;
										if(*str == '\0')
										{
											break;
										}
								}
								printf(" ");
						}
				}
	
		}
		
		
}
	
int main(int argc, char* arhv[])
{
	char cArr[300]={'\0'};
	int  bRet=0;
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);

	StrCapitalFirstLetter(cArr);
	printf("\n\n");
	printf("\t\t%s",cArr);
	
	return 0;
}
