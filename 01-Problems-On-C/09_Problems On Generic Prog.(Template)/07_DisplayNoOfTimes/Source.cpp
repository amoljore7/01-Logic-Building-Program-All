#include<iostream>
#include<malloc.h>

using namespace std;

template <class T>

void Display( T iValue, int iSize)
{
		if((iValue == NULL) || (iSize < 0))
			{
				printf("\nPlz Enter Proper Input\n");
				return;	
			}	
		
		int i =0;
		for(i=0;i<iSize;i++)
			{
				printf("%d\t",iValue);
			}
}

int main(int argc,char* argv[])
{
	Display(11,7);
}
