#include<stdio.h>

void StrWrdRev(char *str)
{
	if(NULL == str)
		{
			return;
		}
		
		char T='\0';
		char *last=NULL;
		char *start=NULL;
				
	while(*str!= '\0')
		{

			if(*str==' ')
			{
				while((*str==' ')&&(*str!='\0'))
					{
						str++;
					}
			}
			else if(*str!=' ')
				{
					start=str;
					
					while((*start!=' ')&&(*start!='\0'))
					{
						start++;
					}
				last=start;
				start--;
				while(str<start)
							{
								T=*start;
								*start=*str;
								*str=T;
								
								start--;
								str++;	
							
							}
					str=last;
			}
		}
}
	
int main(int argc, char* arhv[])
{
	char cArr[300]={'\0'};
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);

	StrWrdRev(cArr);
	printf("\n");
	printf("\t\t%s",cArr);
	
	return 0;
}
