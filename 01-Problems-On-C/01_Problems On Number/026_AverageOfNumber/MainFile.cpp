#include<stdio.h>
void Average(int iNo1,int iNo2,int iNo3)
{
	float Avg=0.0f;
	 Avg=(iNo1+iNo2+iNo3)/3;
	
	printf("\t\tAverage is= %f ",Avg);
	
}

int main(int argc,char*argv[])
{
	int iNum1=0;
	int iNum2=0;
	int iNum3=0;
	
	printf("\t\tEnter Fist No: ");
	scanf("%d",&iNum1);
	printf("\t\tEnter Second No: ");
	scanf("%d",&iNum2);
	printf("\t\tEnter Thired No: ");
	scanf("%d",&iNum3);
	
	Average(iNum1,iNum2,iNum3);
	return 0;
}
