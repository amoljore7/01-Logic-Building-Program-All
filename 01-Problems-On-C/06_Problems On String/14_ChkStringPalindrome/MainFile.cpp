#include<stdio.h>
 void ChkStringPalindrome(char *Str)
{
	if(Str == NULL)
		{
			return ;		
		}	
	int iCnt=0;
	int iCount=0;
	int iSize=0;
	
	while(Str[iCnt] != '\0')
		{
			iCount++;
			iCnt++;
		}
		iSize=iCount -1;
		iCnt=0;
		
	for(iCnt=0;iCnt<iSize/2;iCnt++,iSize--)
		{
				if(Str[iCnt]!=Str[iSize])
					{
						break;
					}
		}
		printf("\n\n");
	if( Str[iCnt]== Str[iSize])
		{
			printf("\t\tString is Palindrome\n");
			
		}
	else 
		{
			printf("\t\tString is NOT Palindrome\n");
		}
}
int main(int argc, char* argv[])
{

	char Str[30]={'\0'};
	
	printf("\t\tEnete String : ");
	scanf("%[^'\n']s",Str);
	
	ChkStringPalindrome(Str);
	return 0;
} 
