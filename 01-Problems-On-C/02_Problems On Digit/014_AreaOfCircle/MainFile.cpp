#include<stdio.h>

float AreaOfCircle(float fRadious)
{
	float pi=3.14159;
	float R=pi*fRadious*fRadious;
	return R;
}
int main(int argv,char* argc[])
{
	float area=0;
	float iRet=0;
	printf("\t\tEnter the Area: ");
	scanf("%f",&area);
	iRet=AreaOfCircle(area);
	printf("\t\t AreaOfCircle is %f",iRet);
	
	return 0;
}
