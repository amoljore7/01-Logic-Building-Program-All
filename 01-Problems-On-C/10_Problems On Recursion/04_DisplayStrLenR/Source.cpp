#include<stdio.h>
#include<malloc.h>

int Display(char *str)
{
	if(str == NULL)	
		{
			return -1;
		}
	static int iCnt = 0;
	if(*str != '\0')
		{
			iCnt ++;
			printf("%c\t",*str);
			str++;
		
			Display(str);	
		}
	return iCnt;
}

int main(int argc, char* argv[])
{
	int iRet =0;
	char iArr[30]="marvellous";
	
	iRet = Display(iArr);
	printf("\nLenght of Stirng is : %d",iRet);
	
	return 0;
}
