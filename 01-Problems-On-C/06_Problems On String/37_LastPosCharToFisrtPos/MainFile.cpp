#include<stdio.h>
void Display(char *str)
{
	int i=0;
	int icnt=0;
	int temp=0;
	while(str[i] !='\0')
		{
			icnt++;
			i++;
		}
	temp=str[icnt-1];	
	for(i=icnt-1;i>0;i--)
	{
		str[i] = str[i-1];
	
	}
		str[0]=temp;
		printf("%s",str);
}
int main()
{
	char str[20]={'\0'};
	
	printf("\t\tEnter String:\t");
	scanf("%[^'\n']s",str);
	Display(str);
	return 0;
}
