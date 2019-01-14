#include<stdio.h>

typedef unsigned long int LONG;

void DigitToString(LONG iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	LONG iSum=0;
	LONG iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
			switch(iDigit)
			{
				case 0:
					printf("\t\tZero\n");
					break;
				case 1:
					printf("\t\tOne\n");
					break;
				case 2:
					printf("\t\tTwo\n");
					break;
				case 3:
					printf("\t\tThree\n");
					break;
				case 4:
					printf("\t\tFour\n");
					break;
				case 5:
					printf("\t\tFive\n");
					break;
				case 6:
					printf("\t\tSix\n");
					break;
				case 7:
					printf("\t\tSeven\n");
					break;
				case 8:
					printf("\t\tEight\n");
					break;
				case 9:
					printf("\t\tNine\n");
					break;
			}
			iNo=iNo/10;
	}
}

int main(int argc,char* argv[])
{
	LONG iValue=0;
	LONG iRet=0;
	printf("\t\tEnter The Number: ");
	scanf("%ld",&iValue);
	
	DigitToString(iValue);
	
}
