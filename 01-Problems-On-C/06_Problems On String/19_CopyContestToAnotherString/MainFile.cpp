#include<stdio.h>
void Display(char *Src, char *Dest)
{
	if((NULL == Src) || (NULL == Dest))
		{
			return;
		}
	while(*Src != '\0')
		{
			*Dest = *Src;
			Src++;
			Dest++;
		}
		*Dest='\0';
}
int main(int argc, char* argv[])
{
	char cArr[30]={'\0'};
	char cBrr[30]={'\0'};
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	
	Display(cArr,cBrr);
	printf("\n\t\tString Copied-> ");
	printf("\n\t\t%s",cBrr);
	return 0;
}