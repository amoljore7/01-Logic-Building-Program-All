#include<stdio.h>
#include<malloc.h>

void StringRevR(char iArr[])
	{
		if(iArr == NULL)
			{
				
				return ;
			}
			
		static int i =0;	
		
		if(iArr[i] != '\0')
			{
			
				i++;
				StringRevR(iArr);
				i--;
				printf("%c ",iArr[i]);
			}
	}
int main(int argc, char *argv[])
	{
		int i=0;
		char str[50] = {'\0'};
		
		printf("\nEnter String: ");
		scanf("%[^'\n']s",&str);
		
		StringRevR(str);
		
		return 0;
	}
