#include<stdio.h>
 
int DiffFreOfCapitalSmall(char *Str)
{
	if(Str == NULL)
		{
			return -1;		
		}	
	int iCnt=0;
	int iCount1=0;
	int iCount2=0;
	int iCount=0;
	
	while(Str[iCnt] != '\0')
		{
			if( (Str[iCnt] >= 65) && (Str[iCnt] <=90) )
				{
					iCount1++;
				}
			else if((Str[iCnt] >= 97) && (Str[iCnt] <=122) )
				{
					iCount2++;
				}
			Str++;
		
		}
		iCount = iCount1 - iCount2;
		if(iCount < 0)
			{
				iCount=-iCount;
			}
		return iCount;
}
int main(int argc, char* argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	
	printf("\t\tEnete String : ");
	scanf("%[^'\n']s",Str);
	
	iRet=DiffFreOfCapitalSmall(Str);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;	
		}	
	else
		{
			printf("\t\tDiif Of Capital And Small String -> %d\t",iRet);
			
		}
	return 0;
} 
