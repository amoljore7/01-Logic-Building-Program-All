#include<stdio.h>
typedef long int LONG;
LONG Estimate(LONG fSq,LONG fLen,LONG fWidth)
{
	if((fSq<0)||(fLen<0)||(fWidth<0))
	{
		fSq=-fSq;
		fLen=-fLen;
		fWidth=-fWidth;
	}
	LONG Ans=0;
	LONG Cost=0;
	Ans=fLen*fWidth;
	Cost=fSq*Ans;
	
	return Cost;
}

int main(int argv,char* argc[])
{
	float fSq=0;
	float fLen=0;
	float fWidth=0;
	float iRet=0;
	printf("\t\tEnter the Price per Sq feet: ");
	scanf("%f",&fSq);
	printf("\t\tEnter the Length: ");
	scanf("%f",&fLen);
	printf("\t\tEnter the Width: ");
	scanf("%f",&fWidth);
	iRet=Estimate(fSq,fLen,fWidth);
	printf("\t\t Calsulated Cost is %f",iRet);
	
	return 0;
}
