#include<stdio.h>

void Display(int No, int iSize)
{
	if((No == NULL) || (iSize < 0))	
		{
			return;
		}
	static int i = iSize;
	
	if(i > 0)
		{
			
			printf("%d\t",No);
			No--;
			i--;
			Display(No,i);	
		}
}

int main(int argc, char* argv[])
{
	int No = 0;
	int length = 0;
	printf("\nEnter The Number : ");
	scanf("%d",&No);
	
	printf("\nEnter Size of No : ");
	scanf("%d",&length);
	
	Display(No,length);
	
	return 0;
}
