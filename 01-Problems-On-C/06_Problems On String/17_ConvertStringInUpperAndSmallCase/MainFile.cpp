#include<Stdio.h>
void StrLwrX(char *Str)
{
	if(NULL == Str)
		{
			return;
		}
	while(*Str !='\0')
		{
			if((*Str >= 'A') && (*Str <= 'Z'))
				{
					*Str = *Str + 32;		
				}
			Str++;		
		}	
}
void StrUprX(char *Str)
{
	if(NULL == Str)
		{
			return;
		}
	while(*Str !='\0')
		{
			if((*Str >= 'a') && (*Str <= 'z'))
				{
					*Str = *Str - 32;		
				}
			Str++;		
		}	
}
int main(int argc, char* argv[])
{
	char cStr[30]={'\0'};
	printf("\t\tEnter String:\t");
	scanf("%[^'\n']s",cStr);
	
	printf("\n\t\t%s",cStr);
	StrLwrX(cStr);
	printf("\n\t\t%s",cStr);
	StrUprX(cStr);
	
	printf("\n\t\t%s",cStr);
	return 0;
}