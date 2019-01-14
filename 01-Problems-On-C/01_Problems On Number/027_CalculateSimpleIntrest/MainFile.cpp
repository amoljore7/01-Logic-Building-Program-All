#include<stdio.h>

void CalculateSimpleIntrest(int PrincipalAmount,int Time,int ROI)
{
	int SimpleIntrest=0;
	SimpleIntrest=((PrincipalAmount * Time * ROI)/100);
	printf("\t\tSimpleIntrest is: %d",SimpleIntrest);
}

int main(int argc,char* argv[])
{
	int Amt=0;
	int Time=0;
	int COI=0;
	printf("\t\tEnter Principal Amount: ");
	scanf("%d",&Amt);
	printf("\t\tEnter Time: ");
	scanf("%d",&Time);
	printf("\t\tEnter Create of Intrest: ");
	scanf("%d",&COI);
	
	CalculateSimpleIntrest(Amt,Time,COI);
	return 0;
}
