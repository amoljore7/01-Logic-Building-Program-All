#include<stdio.h>
#include<stdlib.h>

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
	int iSize=0;
	float fGreater=0;
	float *fBrr=NULL;
	printf("\t\tEnter The SIZE OF Element: ");
	scanf("%d",&iSize);
	printf("\t\tEnter The Greater Elemnt: ");
	scanf("%f",&fGreater);
	
		fBrr=(float*)calloc(iSize,sizeof(float));
		if(fBrr==NULL)
		{
			printf("\t\tUnable To Allocate Memory");
			return -1;
		}
	printf("\t\tEnter the Element:\n");
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%f",&fBrr[iCnt]);
	}
	DisplayFloat(fBrr,iSize,fGreater);
	return 0;	
}
