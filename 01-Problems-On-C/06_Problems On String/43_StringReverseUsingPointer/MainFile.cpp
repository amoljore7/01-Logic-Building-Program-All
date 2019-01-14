#include<stdio.h>
void Reverse(char *str)
{
	if(NULL == str)
		{
			return;
		}
	char *Start;
	char *End;
	char Temp;
	
	Start=str;
	End=str;
	
	while(*End != '\0')
	{
		End++;
	}
	End--;
	while(Start<End)
		{
			Temp=*Start;
			*Start=*End;
			*End=Temp;
			
			Start++;
			End--;
		}
}
int main(int argc, char* arhv[])
{
	char cArr[30]={'\0'};
	
	printf("\t\tEnter String: ");
	scanf("%[^'\n']s",cArr);
	printf("\n\n");
	printf("\t\tBefore Call: %s",cArr);
	Reverse(cArr);
	printf("\n\n");
	printf("\t\tAfter Call: %s",cArr);
	
	return 0;
}
