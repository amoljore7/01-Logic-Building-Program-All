#include<stdio.h>
void Pattern(char *str1)
{
	if(NULL==str1)
	{
		return;
	}
	int i=0,j=0,k=0;
	while(str1[j]!='\0')
		{
			j++;
		}
		for(i=0;i<j;i++)
		{
			for(k=i;k<j;k++)
				{
					if(i<=k)
					{
						printf("%c ",str1[k]);	
					}
					else
					printf("  ");
				
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

