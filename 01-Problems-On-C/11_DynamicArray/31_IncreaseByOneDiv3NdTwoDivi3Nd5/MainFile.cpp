#include<stdio.h>
#include<stdlib.h>

void Increase(int *iArr,int iSize)
	{
		if((iArr==NULL) || (iSize<0))
			{
				return ;
			}
		int iCnt=0;
		
		for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if ( ((iArr[iCnt] % 5)==0) && ((iArr[iCnt] % 3 ) == 0)  )
					{
						iArr[iCnt]=iArr[iCnt] + 2;
						printf(" %d\t",iArr[iCnt]);
					}
				else if((iArr[iCnt] % 3) == 0)
					{
						iArr[iCnt]=iArr[iCnt] + 1; 
						printf(" %d\t",iArr[iCnt]);
					}
					else
					{
						printf(" %d\t",iArr[iCnt]=1);
					}
			}
			
	}
int main(int argc,char* argv[])
	{
		int iLength=0;
		int *iBrr=NULL;;
		int iCnt=0;
		
		
		printf("\t\tEnter The SIZE Of Element: ");
		scanf("%d",&iLength);
		
		iBrr=(int*)calloc(iLength,sizeof(int));
			if(iBrr==NULL)
				{
					printf("\t\tUnable To Allocate Memory: ");
					return -1;
				}
		
		printf("\t\tEnter Element:\n");
		for(iCnt=0;iCnt<iLength;iCnt++)
			{
				printf("\t\tEnter Element No: %d\t",iCnt+1);
				scanf("%d",&iBrr[iCnt]);
			}
		printf("\n\n");
		Increase(iBrr,iLength);
		
		free(iBrr);
		return 0;
	}