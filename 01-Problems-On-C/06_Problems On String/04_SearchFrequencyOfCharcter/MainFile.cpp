#include<stdio.h>

int Frequency(char *cStr, char cCh)
{
	if	( (cStr == NULL) || (cCh == '\0') )
		{
			return -1;
		}
	int iCount=0;
	
	while(*cStr != '\0')
		{
			if(*cStr == cCh)
				{
					iCount++;
				}
			cStr++;
		}
	return iCount;
}
int main(int argc, char* argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	char ch='\0';
	
	printf("\t\tEnter Any String  :\t\t");
	scanf("%[^'\n']s",Str);
	fflush(stdin);
	printf("\n");
	printf("\t\tEnter Which Charcter To Be Search: ");
	scanf("%c",&ch);
	
	iRet=Frequency(Str,ch);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;
		}
	else
		{
			printf("\t\tFrequecey of -> %c Occures In -> %d Time\n",ch,iRet);
			return 0;
		}
	
}
