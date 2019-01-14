#include<stdio.h>

void strcatX(char *src,char *dest)
{
		if((NULL==src)||(NULL==dest))
			{
				return;
			}
		while(*src != '\0')
			{
				src++;
			}
		
		while(*dest != '\0')
			{
				*src=*dest;
				src++;
				dest++;
			}
		*src='\0';
}
int main(int argc,char* argv[])
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	
	printf("\t\tEnter First String: ");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	printf("\t\tEnter Second String: ");
	scanf("%[^'\n']s",brr);
	
	printf("\n");
	
	strcatX(arr,brr);
	
	printf("\t\t Concate String is %s",arr);
	
	return 0;
}
