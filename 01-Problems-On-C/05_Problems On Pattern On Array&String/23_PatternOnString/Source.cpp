#include<stdio.h>
#include<malloc.h>

void Pattern(char *str)
{
	int i=0,j=0,iCnt=0;
	
	if(NULL==str)
	{
		return;
	}
	
	while(str[iCnt]!='\0')
	{
		iCnt++;
	}
		
	for(i=0;i<iCnt;i++)
		{
			for(j=0;j<(iCnt-i);j++)
			{
			
					printf("%c ",str[j]);
			
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
