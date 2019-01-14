#include<iostream>
using namespace std;

#define TRUE	1
#define FALSE	0

typedef int BOOL;

class Number
{
protected:
	int iNo;

public:

	Number(int);
	void Accept();
	void Display();

	void DisplayFactor();
	int SumFactor();
	int Factorial();
};

class AdvNumber :public Number
{
public:
	AdvNumber(int iValue): Number(iValue)
	{}

	BOOL ChkPerfect();
	BOOL ChkPrime();

};

Number::Number(int iValue=1)
{
	this->iNo=iValue;
}

void Number::Accept()
{
	cout<<"\n\t\tEnter Your Number : ";
	cin>>iNo;
}
void Number::Display()
{
	cout<<"\n\t\tNumber is : "<<iNo<<"\n";
}
void Number::DisplayFactor()
{
	int i =0;
	for(i=1;i<=(iNo/2);i++)
	{
		if((iNo % i)==0)
		{
			cout<<i<<"\t";
		}
	}
	cout<<"\n";
}

int Number::SumFactor()
{
	int iSum =0;
	int i = 1;

	for(i=1;i<=(iNo/2);i++)
	{
		if((iNo % i)==0)
		{
			iSum = iSum + i;
		}
	}
	return iSum;
}

int Number::Factorial()
{
	int iFact = 1;
	int i =0;
	for(i=1;i<=iNo;i++)
	{
		iFact = iFact * i;
	}
	return iFact;
}

BOOL AdvNumber::ChkPerfect()
{
	int iSum = SumFactor();
	if(iSum == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

BOOL AdvNumber::ChkPrime()
{
	int i =0;
	for(i=2;i<=(iNo/2);i++)
	{
		if((iNo % i)==0)
		{
		break;
		}
	}
	if(i > (iNo/2))
	{
	return TRUE;
	}
	else
	{
	return FALSE;
	}
}


int main(int argc, char *argv[])
{
	Number obj2;

	obj2.Accept();
	obj2.Display();

	cout<<"\n\t\tAddition of Factor is : "<<obj2.SumFactor();
	cout<<"\n------------------------------------------------------------------------------\n";

	AdvNumber obj1(0);
	obj1.Accept();

	if(obj1.ChkPerfect())
			{
				cout<<"\n\t\tNumber is Perfect\n";
			}
		else
			{
				cout<<"\n\t\tNumber is NOT Perfect\n";
			}

	if(obj1.ChkPrime())
			{
				cout<<"\n\t\tNumber is Prime\n";
			}
		else
			{
				cout<<"\n\t\tNumber is NOT Prime\n";
			}

	cout<<"\n\n";
	return 0;
}
