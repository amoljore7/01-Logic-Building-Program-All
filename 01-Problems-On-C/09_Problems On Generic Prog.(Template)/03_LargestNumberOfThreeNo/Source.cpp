#include<iostream>

using namespace std;

template < class T >

T LargeNo(T No1, T No2, T No3)
	{
		T Ans = 0;
		
		if((No1 > No2) && (No1 > No3))
			{
				return No1;
			}
		else if((No2 > No1) && ( No2 > No3))
			{
				return No2;
			}
		else
			{
				return No3;
			}
	
		return Ans;		
	}


int main(int argc, char *argv[])
{
	int iRet = 0;
	
	iRet = LargeNo(501,81,10);
	printf("\nLargest Number is %d\n",iRet);
	
	
	return 0;	
}
