#include<stdio.h>
void DisplayFloat(float *fArr,int iSize,float fGreater)
{
	printf("\t\tGreater Element is->");
	int i=0;
	for(i=0;i<iSize;i++)
		{
			if(fArr[i]>fGreater)
			{
				printf(" %f ",fArr[i]);
			}
		}
}
int main(int argc,char* argv[])
{
	float fGreater=0;
	
	printf("\t\tEnter The Greater Elemnt: ");
	scanf("%f",&fGreater);
	
	printf("\t\tEnter the Element:\n");
	int iCnt=0;
	
	float fBrr[10]={0};
	for(iCnt=0;iCnt<10;iCnt++)
	{
		scanf("%f",&fBrr[iCnt]);
	}
	DisplayFloat(fBrr,10,fGreater);
	return 0;	
}
