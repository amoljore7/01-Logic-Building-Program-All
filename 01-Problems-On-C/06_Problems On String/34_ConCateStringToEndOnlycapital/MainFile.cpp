#include<stdio.h>
void strcpyX(char *src,char *desc)
{
	if((NULL==src)|| (NULL==desc))
	{
		return;
	}
	
	while(*desc!='\0')
		{
			desc++;
		}
	while(*src!='\0')
		{
			if((*src>=65) && (*src<=90))
				{
					*desc=*src;
					desc++;
				}
			src++;
		}
	*desc='\0';
		
}
int main(int argc,char *argv[])
{
	char str1[30];
	char str2[30];
	
	printf("\t\tEnter First String:\t");
	scanf("%[^'\n']s",str1);
	fflush(stdin);
	printf("\t\tEnter Second String:\t");
	scanf("%[^'\n']s",str2);
	fflush(stdin);
	
	strcpyX(str1,str2);
	
	printf("\t\t%s",str2);
	
	return 0;
}
