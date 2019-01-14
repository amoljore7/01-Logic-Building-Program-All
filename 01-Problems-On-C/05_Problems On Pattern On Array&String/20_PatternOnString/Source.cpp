#include<stdio.h>
#include<malloc.h>

void Pattern(char *str)
{
	int i=0,j=0;
	
	if(NULL==str)
	{
		return;
	}	
	for(i=0;str[i]!='\0';i++)
		{
			for(j=0;str[j]!='\0';j++)
			{
				if(i<=j)
				{
					printf("%c ",str[j]);
				}
			
			}
			printf("\n");
		}
	

}


int main()
{

char arr[50];

printf("Enter Your String: \t");
scanf("%[^'\n']s",arr);

Pattern(arr);
	
return 0;	
	
}
