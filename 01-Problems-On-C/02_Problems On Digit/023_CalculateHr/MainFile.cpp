#include<stdio.h>
typedef unsigned int UINT;

void CalculateHr(UINT iHr)
{
		if(iHr<0)
		{
			iHr=-iHr;	
		}	
	
	UINT iHrs=0;
	UINT iMint=0;
	
	while(iHr!=0)
	{
			iHrs=iHr/60;
			iMint=iHr%60;
			printf("\t\t %d Hourse\t %d Minutes",iHrs,iMint);
			break;
		
	}

}
int main(int argv,char* argc[])
{
	UINT iMinutes=0;
	printf("\t\tEnter No Of Munutes: ");
	scanf("%ld",&iMinutes);
	 CalculateHr(iMinutes);
	 
	return 0;
}
