#include<Stdio.h>
int ReturnFisrtPosOfChar(char *Str, char ch)
	{
		if((Str == NULL) || (ch ==NULL) )
			{
				return -1;
			}
		int iCnt=0;
		int iCount=0;
		
		while(Str[iCnt] != '\0')
			{
			
				if(Str[iCnt] == ch)
					{
					break;		
					}
				iCount++;
				Str++;	
			}
		return iCount;
	}
int main(int argc,char* argv[])
{
	int iRet=0;
	char Str[30]={'\0'};
	char ch='\0';
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",Str);
	
	printf("\t\tEnter One Charcte: ");
	fflush(stdin);
	scanf("%c",&ch);
	
	iRet=ReturnFisrtPosOfChar(Str,ch);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;	
		}	
	else
		{
			printf("\t\tFirst Possition Of Charcter Occures INDEX No. -> %d\t",iRet);
			
		}
	return 0;
}
