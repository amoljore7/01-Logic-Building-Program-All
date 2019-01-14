#include<stdio.h>

int Display(int No)
{
	if(No == NULL)	
		{
			return -1;
		}
	 static int iFact = 1;
	 static int i = 1;
	
	if(i <= No)
		{
			iFact = iFact * i;
			i++;
			Display(No);	
		}
	return iFact;
}

int main(int argc, char* argv[])
{
	int No = 0;
	int iRet =0;
	
	printf("\nEnter The Number : ");
	scanf("%d",&No);
	
	iRet = Display(No);
	printf("\nFactorial is %d\n",iRet);
	
	return 0;
}
