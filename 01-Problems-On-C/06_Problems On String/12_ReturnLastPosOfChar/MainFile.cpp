#include<Stdio.h>
int ReturnLastPosOfChar(char *Str, char ch)
	{
		if((Str == NULL) || (ch ==NULL) )
			{
				return -1;
			}
		int iCnt=0;
		int iCount=0;
		int counting=0;
		int size=0;
		int iResult;

		
			while(Str[iCnt] != '\0')
		{
			iCount++;
			iCnt++;
		}
		
		size=iCount -1;
		iCnt=0;
		
	for(iCnt=size;iCnt >=0;iCnt--)
		{
			
			if(Str[iCnt] == ch)
			{
				break;
			}
			counting++;
		}
		iResult= size - counting ;
		
		return iResult;
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
	
	iRet=ReturnLastPosOfChar(Str,ch);
	printf("\n\n");
	if(iRet == -1)
		{
			printf("\t\tInvalide Input ");
			return -1;	
		}	
	else
		{
			printf("\t\tLast Possition Of Charcter Occures Index No. -> %d\t",iRet);
			
		}
	return 0;
}
