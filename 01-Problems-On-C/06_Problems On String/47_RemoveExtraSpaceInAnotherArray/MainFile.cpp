#include<stdio.h>

void RemoveSpace(char *str,char *dest)
{
	if((NULL == str)||(NULL == dest))
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
							*dest=*str;
							dest++;
							str++;
								if(*str == '\0')
								{
									break;
								}
						}
				}
	
		}
		*dest='\0';
		
}
	
int main(int argc, char* arhv[])
{
	char cArr[300]={'\0'};
	char cBrr[300]={'\0'};
	int  bRet=0;
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	
	printf("\n");
	RemoveSpace(cArr,cBrr);
	printf("\t\t%s",cBrr);
	
	return 0;
}
