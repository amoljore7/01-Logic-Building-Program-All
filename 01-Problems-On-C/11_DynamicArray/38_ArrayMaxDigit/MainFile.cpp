#include<stdio.h>
#include<stdlib.h>

void MaxDigit(int *iArr,int iSize)
{
		if((iArr==NULL) || (iSize<0))
		{
			return ;	
		}	
	int iCnt=0;
	int iTemp=0;
	int iDigit=0;
	int iMax=0;
	int iMaxDigit=0;
	
	int iCrr[10]={0};
	
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			iTemp=iArr[iCnt];
			
			while(iTemp!=0)
				{
					iDigit=iTemp%10;
					iCrr[iDigit]++;
					iTemp=iTemp/10;
				}
		}
		for(iCnt=0;iCnt<10;iCnt++)
			{
				if( iCrr[iCnt]>iMax)
					{
						iMax=iCrr[iCnt] ;
						iMaxDigit=iCnt;
					}
			}
		printf("\t%d Occurs %d Time's'",iMaxDigit,iMax);
}

int main(int argc, char* argv[])
{
	int *iBrr=NULL;
	int iLength=0;
	int iCnt=0;
	int iRet=0;
	
	printf("\t\tEnter Size Of Element: ");
	scanf("%d",&iLength);
	
	iBrr=(int*)calloc(iLength,sizeof(int));
		if(iBrr==NULL)
		{
			return -1;
		}
	printf("\t\tEnter Element:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
		{
			printf("\t\tEmter Element No: %d\t",iCnt+1);
			scanf("%d",&iBrr[iCnt]);
		}
	
		MaxDigit(iBrr,iLength);
	
	free(iBrr);
	return 0;
}
