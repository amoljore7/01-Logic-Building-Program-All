#include<stdio.h>
 float AreaOfSquare(float fLength)
 {
 	if(fLength<0)
 	{
 		fLength=-fLength;
	}
	float area=fLength*fLength;
	return area;
	
 }
 int main(int argv,char* argc[])
 {
 	float iLength=0;
 	float iRet=0;
 	printf("\t\tEnter the Lenght: ");
 	scanf("%f",&iLength);
 	
 	iRet=AreaOfSquare(iLength);
 	
 	printf("\t\tArea Of Squar is %f",iRet);
 	
 	return 0;
 }
