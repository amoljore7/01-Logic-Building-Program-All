//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Fibonacci(int iNo)
{
	int a = 0, b = 1;
	int c = 0;
	int iCnt = 0;

	while (iCnt <= iNo)
	{

		printf("%d\t", a);
		c = a + b;
		a = b;
		b = c;
		iCnt++;
	}
}
int main(int argc, char* argv[])
{
	int iNum = 0;
	printf("Enter Any No: ");
	scanf("%d", &iNum);

	Fibonacci(iNum);

	return 0;
}
