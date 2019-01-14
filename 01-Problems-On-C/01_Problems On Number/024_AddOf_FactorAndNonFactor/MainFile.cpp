#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: DisplayComFactorLarge
//		Description		: It is used to integer.
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayComFactorLarge(int iNo)
{
	if(iNo==0)
	{
		return ;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iCnt=0;
	int sumFactor=0;
	int sumNonFactor=0;
	int Add=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
			if((iNo%iCnt)==0)
			{
				sumFactor=sumFactor+iCnt;		
			}
			else
			{
				sumNonFactor=sumNonFactor+iCnt;		
			}				
	}
		Add=sumFactor+sumNonFactor;
		printf("\t\tAddition is: %d ",Add);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	int iNum = 0;
	printf("Enter The No: ");
	scanf_s("%d", &iNum);	
	DisplayComFactorLarge(iNum);
	return 0;
}
