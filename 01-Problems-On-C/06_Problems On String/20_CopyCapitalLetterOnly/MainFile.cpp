#include<stdio.h>
void CopyCapitalOnly(char *Src, char *Dest)
{
	if((NULL == Src) || (NULL == Dest))
		{
			return;
		}
	while(*Src != '\0')
		{
			if((*Src >= 'A') && (*Src <= 'Z'))
				{
					*Dest = *Src;
					Dest++;
				}
			Src++;
		}
		*Dest='\0';
}
int main(int argc, char* argv[])
{
	char cArr[30]={'\0'};
	char cBrr[30]={'\0'};
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	
	CopyCapitalOnly(cArr,cBrr);
	printf("\n\t\tString Copied-> ");
	printf("\n\t\t%s",cBrr);
	return 0;
}