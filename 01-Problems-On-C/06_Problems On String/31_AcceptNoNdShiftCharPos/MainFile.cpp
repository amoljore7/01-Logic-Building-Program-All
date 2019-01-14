#include<stdio.h>
void Display(char *str,int No)
{
		int i=No;
	int icnt=0;
	int temp=0;
	while(str[i] !='\0')
		{
			printf("%c",str[i]);
			i++;
		}
		
	for(i=0;i<No;i++)
	{
		printf("%c",str[i]);
	
	}		
		
}
int main()
{
	char str[20]={'\0'};
	int iNo=0;
	
	printf("\t\tEnter String:\t");
	scanf("%[^'\n']s",str);
	fflush(stdin);
	
	printf("\t\tEnter Number:\t");
	scanf("%d",&iNo);
	
	Display(str,iNo);
	return 0;
}
