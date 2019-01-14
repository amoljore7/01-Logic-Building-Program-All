#include<stdio.h>
void Count(char *str1,char *str2)
{
	if((NULL == str1) || (NULL == str2))
		{
			return;
		}
		int iCnt1=0;
		int iCnt2=0;
		
	while((*str1 !='\0')||(*str2 !='\0'))
		{
			if(*str1 !='\0')
				{
					iCnt1++;
					str1++;
				}
			if(*str2 !='\0')
				{
					iCnt2++;
					str2++;
				}
		}
		printf("\n\n");
	printf("\t\tLength of String 1 is -> %d\n",iCnt1);
	printf("\t\tLength of String 2 is -> %d\n",iCnt2);
}
int main(int argc, char *argv[])
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};
	
	printf("\t\tEnter First String: ");
	scanf("%[^'\n']s",arr);
	fflush(stdin);
	printf("\t\tEnter Second String: ");
	scanf("%[^'\n']s",brr);
	
	Count(arr,brr);
	
	return 0;
}
