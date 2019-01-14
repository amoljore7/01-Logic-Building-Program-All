#include<stdio.h>
void DisplayASCII()
{
	int i=0;
	printf("Decimal\tCharcter\tHex");
	for(i=0;i<255;i++)
		{
			printf("%d\t%c\t%x\n",i,i,i);
		}
}
int main()
{
	DisplayASCII();
	
	return 0;
}

