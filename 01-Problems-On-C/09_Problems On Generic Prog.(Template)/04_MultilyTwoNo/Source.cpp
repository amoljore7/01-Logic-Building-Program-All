#include<iostream>

using namespace std;

template < class T >

T Multiply(T No1, T No2)
	{
		T Ans = 0;
		Ans = No1 * No2;
		return Ans;		
	}


int main(int argc, char *argv[])
{
	int iRet = 0;
	float fRet;
	
	iRet = Multiply(2,2);
	printf("\nMultiplication is %d\n",iRet);
	
	fRet = Multiply(10.0f,20.0f);
	printf("\nMultiplication is %f\n",fRet);
	
	return 0;	
}
