#include<stdio.h>
void Display(char *str)
{
	int i=1;
	while(str[i] !='\0')
		{
			printf("%c",str[i]);
			i++;
		}
	printf("%c",str[0]);
}
int main()
{
	char str[20]={'\0'};
	
	printf("\t\tEnter String:\t");
	scanf("%[^'\n']s",str);
	Display(str);
	return 0;
}
