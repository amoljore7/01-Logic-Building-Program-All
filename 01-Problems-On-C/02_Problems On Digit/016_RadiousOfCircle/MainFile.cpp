#include<stdio.h>

float RadiousOfCircle(float fRadious)
{
	float pi=3.14159;
	float R=2*pi*fRadious;
	return R;
}
int main(int argv,char* argc[])
{
	float Radious=0;
	float iRet=0;
	printf("\t\tEnter the Radious: ");
	scanf("%f",&Radious);
	iRet=RadiousOfCircle(Radious);
	printf("\t\t RadiousOfCircle is %f",iRet);
	
	return 0;
}
