#include<stdio.h>

void strcpyCapital(char *src,char *dest)
{
		if((NULL==src)||(NULL==dest))
			{
				return;
			}
		while(*src != '\0')
			{
				if((*src >= 'A') && ( *src <= 'Z'))
					{
						*dest=*src;
						dest++;
					}
				src++;
			}
}
int main(int argc,char* argv[])
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",arr);
	
	printf("\n");
	strcpyCapital(arr,brr);
	printf("\t\tCapital Char is: %s",brr);
	
	return 0;
}
