#include<stdio.h>
 float CeToMe(int iNo)
 {
 	float Ans=0;
 	Ans=iNo*0.01;
 	
 	return Ans;
 }
 int main(int argv,char* argc[])
{
	float Ce=0;
	float iRet=0;
	printf("\t\tEnter the Centimeter: ");
	scanf("%f",&Ce);
	iRet=CeToMe(Ce);
	printf("\t\t Centimeter of Meter is %f",iRet);
	
	return 0;
}
