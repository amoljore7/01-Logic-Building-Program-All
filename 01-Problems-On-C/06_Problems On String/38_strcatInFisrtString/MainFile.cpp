#include<stdio.h>

void strcatX(char *src,char *dest,int iCnt)
{
		if((NULL==src)||(NULL==dest) || (NULL==iCnt))
			{
				return;
			}
		while(*src != '\0')
			{
				src++;
			}
		
		while( (*dest != '\0') && (iCnt != 0) )
			{
				*src=*dest;
				src++;
				dest++;
				iCnt--;
			}
		*dest='\0';
}
int main(int argc,char* argv[])
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	int iNo=0;
	
	printf("\t\tEnter First String: ");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	printf("\t\tEnter Second String: ");
	scanf("%[^'\n']s",brr);
	
	printf("\t\tEnter Number: ");
	scanf("%d",&iNo);
	printf("\n");
	
	strcatX(arr,brr,iNo);
	
	printf("\t\t Concate String is -> %s",arr);
	
	return 0;
}
