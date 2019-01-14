#include<stdio.h>

float AreaRect(float fLength, float fWidth)
{
	if((fLength<0)||(fWidth<0))
	{
		fLength=-fLength;
		fWidth=-fWidth;
	}
	
	float fRect=0;
			fRect=fLength*fWidth;
		
		return fRect;
}
int main(int argv,char* argc[])
{
	float fLen=0;
	float fWidth=0;
	float iRet=0;
	
	printf("\t\tEnter the Length: ");
	scanf("%f",&fLen);
	fflush(stdin);
	printf("\t\tEnter the Width: ");
	scanf("%f",&fWidth);
	
	iRet=AreaRect(fLen,fWidth);
	printf("\t\tArea Of Rectangle is %f",iRet);
	
	return iRet;
}
