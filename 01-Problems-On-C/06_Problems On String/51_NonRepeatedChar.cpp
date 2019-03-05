#include<stdio.h>

void NonRepeted(char *str)
{
	if(str==NULL)
	{
		return ;
	}
	
	int iCnt =0;
	int i,j;
	int Count =0;
	int iSize=0;
	
	while(str[iCnt] != '\0')
	{
		iCnt++;
		Count++;
	}
	iSize = Count-1 ;
	iCnt=0;
	int flag =0;
	
	for(i =0;i<=iSize;i++)
	{
		flag =0;
		
		 for(j=i+1; j<=iSize;j++)
		 {
		 	if(str[i] == str[j])
		 	{
		 		flag =1;
		 		str[j]='\0';
			}
			else if(str[i]=='\0')
			{
				flag=1;
			}
			
		 }
		if(flag == 0)
		{
			printf("%c ",str[i]);
			return;
		}
	}
	
}

int main()
{
	char cArr[255]={'\0'};
	
	printf("Enter A string : ");
	scanf("%[^'\n']s",&cArr);
	
	NonRepeted(cArr);
	
	return 0;
}
