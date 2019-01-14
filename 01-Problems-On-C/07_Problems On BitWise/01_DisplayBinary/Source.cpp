#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;

const char *cArr[]={"flase","true"};

void DisplayBinary(UINT uNo)
{
	int iDigit=0;
	while(uNo!=0)
		{
			iDigit=uNo%2;
			printf("%u\t",iDigit);
			uNo=uNo/2;		
		}	
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	
	DisplayBinary(uNum);
	
	return 0;
}
