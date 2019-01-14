#include<stdio.h>
void Pattern(char *str1)
{
	if(NULL==str1)
	{
		return;
	}
	int i=0,j=0,k=0;
	while(str1[k]!='\0')
		{
			k++;
		}
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
				{
					printf("%c",str1[j]);
				}
				printf("\n");	
		}
}
int main(int argc,char *argv[])
{
	char str1[30];
	
	printf("\t\tEnter String:\t");
	scanf("%[^'\n']s",str1);
	fflush(stdin);

	Pattern(str1);
	
	return 0;
}

