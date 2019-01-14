#include<stdio.h>
#define TRUE	1
#define FLASE	0
typedef int	   BOOL;
typedef unsigned int UINT;

const char *cArr[]={"flase","true"};

void DisplayBinaryX(UINT No)
{
	int iArr[32]={0};
	int i=0;
	int j=0;
	
	while(No!=0)
		{
			iArr[i]=No & 1;
			i++;
			
			No=No>>1;
		}
		i ;		//32
		i--;	//31
		
	for(j=i;j>=0;j--)
		{
			printf("%d\t",iArr[j]);
		}
		
}

int main(int argc, char *argv[])
{
	UINT uNum=0;
	printf("\t\tEnter Number:\t");
	scanf("%d",&uNum);
	printf("\n\n");
	
	DisplayBinaryX(uNum);
	
	return 0;
}
