#include<stdio.h>

void Display(char *cArr)
{
	if(cArr == NULL)
		{
			return ;
		}
		
	int iCnt=0;
	
	printf("\t\t\nOutput is ->\n");
	
	while( cArr[iCnt] != '\0')
		{
			printf("\t\t%c\n",cArr[iCnt]);
			iCnt++;
		}
}
int main(int argc, char* argv[])
	{
		char str[30];
		
		printf("\t\tEnter Your String : ");
		scanf("%[^\n]s",str);
		
		Display(str);
		
		return 0;
	}
