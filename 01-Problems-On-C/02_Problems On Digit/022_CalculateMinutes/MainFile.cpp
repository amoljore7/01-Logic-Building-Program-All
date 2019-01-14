#include<stdio.h>
typedef unsigned int UINT;

void CalculateMinutes(UINT iHr)
{
		if(iHr<0)
		{
			iHr=-iHr;	
		}	
	UINT iMint=0;
	
	while(iHr!=0)
	{
			iMint=iHr*60;
			printf("\t\t%d Minutes",iMint);
			break;
		
	}

}
int main(int argv,char* argc[])
{
	UINT iHrs=0;
	printf("\t\tEnter No Of Hourse: ");
	scanf("%ld",&iHrs);
	 CalculateMinutes(iHrs);
	 
	return 0;
}
