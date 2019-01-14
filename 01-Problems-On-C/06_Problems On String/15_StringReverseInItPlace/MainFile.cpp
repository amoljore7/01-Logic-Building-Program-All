#include<stdio.h>
 void StringReverse(char *Str)
{
	if(Str == NULL)
		{
			return ;		
		}	
	int iLast=0;
	int iStart=0;
	int iTemp=0;
	
	while(Str[iStart] != '\0')
		{
			iStart ++;
		}
	
	iLast = ( iStart - 1 );
	iStart = 0;
	
	while( iStart < iLast)
		{
			iTemp 		= Str[iStart];
			Str[iStart] = Str[iLast];
			Str[iLast]  = iTemp;
			
			iStart ++;
			iLast --;
		}
}
int main(int argc, char* argv[])
{

	char Str[30]={'\0'};
	
	printf("\t\tEnete String : ");
	scanf("%[^'\n']s",Str);
	
	StringReverse(Str);
	return 0;
} 
