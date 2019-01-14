#include<stdio.h>
void strcpyX(char *src,char *dest,int iNo)
	{
		if((NULL==src)||(NULL==dest)||(NULL==iNo))
			{
				return;
			}
			
		while(("*src!='\0'")&&(iNo != 0))
			{
				*dest=*src;
				dest++;
				src++;
				iNo--;
			}
	}
int main(int argc, char* argv[])
{
	int iCnt=0;
	char arr[30];
	printf("\t\tEnter source String: ");
	scanf("%[^'\n']s",arr);
	
	char brr[30];
	printf("\t\tEnter Number: ");
	scanf("%d",&iCnt);
	
	strcpyX(arr,brr,iCnt);
	
	printf("\t\t%s",brr);
	return 0;
}
