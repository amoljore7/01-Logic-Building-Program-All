#include<stdio.h>

void SimpleIntrest(float PrincipalAmt, float Time,float RateOfInt)
{
	float SI=0;
					SI= (PrincipalAmt * Time * RateOfInt)/100;
					printf("\t\tSimple Intrest is: %f",SI);
}
int main(int argv,int argc[])
{
	float PA=0.0;
	float T=0.0;
	float ROI=0.0;
	
	printf("\t\tEnter The PA: ");
	scanf("%f",&PA);
	printf("\t\tEnter The Time: ");
	scanf("%f",&T);
	printf("\t\tEnter The ROI: ");
	scanf("%f",&ROI);
	
	SimpleIntrest(PA,T,ROI);
	
	return 0;
}
