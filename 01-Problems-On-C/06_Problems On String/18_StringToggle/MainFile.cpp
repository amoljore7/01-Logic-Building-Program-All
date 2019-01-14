#include<stdio.h>
void StrToggle(char *Str)
{
	if(NULL == Str)
		{
			return;
		}
	while(*Str != '\0')
		{
			if((*Str >= 'A') && (*Str <= 'Z'))
				{
					*Str = *Str + 32;
				}
			else if((*Str >= 'a') && (*Str <= 'z'))
				{
					*Str = *Str - 32;		
				}		
		Str++;
		}
		
}
int main(int argc, char* argv[])
{
	char cStr[30]={'\0'};
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cStr);
	
	StrToggle(cStr);
	printf("\n\t\t%s\n",cStr);
	return 0;
}