#include<stdio.h>
 
int CountSmall(char *Str)
{
	if(Str == NULL)
		{
			return -1;		
		}	
	int iCnt=0;
	int iCount=0;
	
	while(Str[iCnt] != '\0')
		{
			if((Str[iCnt] >= 97) && (Str[iCnt] <=122) )
				{
					iCount++;
				}
			Str++;
		}
		return iCount;
}
int main(int argc, char* argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("\t\tEnete String : ");
	scanf("%[^'\n']s",Str);
	
	iRet=CountSmall(Str);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;	
		}	
	else
		{
			printf("\t\tSmall Letter Occures -> %d\tTime",iRet);
			
		}
	return 0;
} 
