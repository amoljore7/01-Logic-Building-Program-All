#include<stdio.h>
#include<stdlib.h>

int ArrayCapital(char *iArr,int iSize)
{
		if((iArr == NULL) || (iSize < 0))
			{
				return -1;
			}
		int iCnt=0;
		int iCount=0;
		
		for(iCnt=0;iCnt<iSize;iCnt++)
			{
				if((iArr[iCnt] >= 65) && (iArr[iCnt]<=90))
				{
					iCount=iCount+1;
				}
			}
		return iCount;
}
int main(int argc, char* argv[])
{
	char *iBrr=NULL;
	int iLength=0;
	int iCnt=0;
	int iRet=0;
	
	printf("\t\tEnter SIZE of Alphabet: ");
	scanf("%d",&iLength);
	
	iBrr=(char*)calloc(iLength,sizeof(char));
		if(iBrr == NULL)
			{
				return -1;
			}
	printf("\t\tEnter Alphabet:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
		{
			printf("\t\tEnter Alphabet No.%d\t",iCnt+1);
			scanf("%s",&iBrr[iCnt]);
		}
	iRet=ArrayCapital(iBrr,iLength);
	printf("\n\n");
	printf("\t\tCapital Occure  %d  Time\n",iRet);
	
	free(iBrr);
	return 0;
}
