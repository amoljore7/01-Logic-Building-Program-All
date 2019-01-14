#include<stdio.h>
 void DisplayReverse(char *Str)
{
	if(Str == NULL)
		{
			return;		
		}	
	int iCnt=0;
	int iCount=0;
	int size=0;
	while(Str[iCnt] != '\0')
		{
			iCount++;
			iCnt++;
		}
		
		size=iCount -1;
		iCnt=0;
		printf("\n\n");
		printf("\t\tReverse String is -> ");
	for(iCnt=size;iCnt >=0;iCnt--)
		{
			printf("%c",Str[iCnt]);
		
		}
}
int main(int argc, char* argv[])
{

	char Str[30]={'\0'};
	
	printf("\t\tEnete String : ");
	scanf("%[^'\n']s",Str);
	
	DisplayReverse(Str);
	return 0;
} 
