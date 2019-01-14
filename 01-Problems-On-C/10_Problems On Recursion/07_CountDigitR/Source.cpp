#include<stdio.h>
#include<malloc.h>

int CountR(int iNo)
	{
		int iDigit = 0;
		static	int iCnt = 0;
		if(iNo > 0)
		{
			iCnt++;
			iDigit = iNo % 10;
			iNo = iNo / 10;
			CountR(iNo);
			
		}
		return iCnt;
	}
int main(int argc, char *argv[])
	{
		int iRet = 0;
		int iNum = 0;
		
		printf("\nEnter Any Nuber: ");
		scanf("%d",&iNum);
		
		iRet = CountR(iNum);
		printf("\nCount of Digit is = %d",iRet);
		
		return 0;
	}
