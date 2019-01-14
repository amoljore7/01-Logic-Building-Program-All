#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

class Digit
	{
	protected:
		int iNo;

	public:

		void Accept();
		void Display();

		int CountDigit();
		int SumDigit();
	};
class AdvDigit : public Digit
	{
	public:
		BOOL ChkStrong();
		BOOL ChkArmStrong();

		int Fact(int);
		int Power(int,int);
	};



void Digit::Accept()
	{
		cout<<"\n\t\tEnter Your Number: ";
		cin>>iNo;
	}


void Digit::Display()
	{
			cout<<"\n\t\tNumber is : "<<iNo<<"\n\n";
	}


int Digit::CountDigit()
	{
		int iCnt = 0;
		int Temp = iNo;

		while(Temp != 0)
		{
			iCnt++;
			Temp=Temp/10;
		}
		return iCnt;
	}
int Digit::SumDigit()
	{
		int iSum =0;
		int Temp = iNo;
		int iDigit =0;
		while(Temp != 0)
		{
				iDigit = Temp % 10;
				iSum = iSum + iDigit;
				Temp = Temp /10;
		}
	return iSum;
	}


int AdvDigit::Power(int x,int y)
	{
		int iRet = 1;
		int i = 1;
		for(i=1;i<=y;i++)
		{
			iRet = iRet * x;
		}
		return iRet;
	}


int AdvDigit::Fact(int iValue)
	{
		int iFact = 1;
		int i =0;
		
		for(i = 1;i<=iValue;i++)
			{
				iFact = iFact * i;
			}
		return iFact;
	}


BOOL AdvDigit::ChkStrong()
	{
			int iSum =0;
			int Temp = iNo;
			int iDigit = 0;

			while(Temp != 0)
				{
					iDigit = iDigit % 10;
					iSum = iSum + Fact(iDigit);
					Temp = Temp / 10;
				}
			if(iSum == iNo)
				{
					return TRUE;
				}
			else
				{
					return FALSE;
				}
	}


BOOL AdvDigit::ChkArmStrong()
	{
		int DigitCount = CountDigit();
		int Temp = iNo;
		int iSum =0;
		int iDigit =0;

		while(Temp != 0)
		{
			iDigit = Temp % 10;
			iSum = iSum + Power(iDigit,DigitCount);
			Temp = Temp / 10;
		}
		if(iSum == iNo)
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
		/*Digit    obj1;

		obj1.Accept();
		obj1.Display();

		
		cout<<"\n\t\tTotal Count Of Digit is : "<<obj1.CountDigit()<<"\n";
		cout<<"\n\t\tAddition Of Digit is    : "<<obj1.SumDigit()<<"\n\n\n";
		*/

		AdvDigit obj2;

		obj2.Accept();
		obj2.Display();
		
		cout<<"\n\t\tTotal Number Of Digit is : "<<obj2.CountDigit()<<"\n";
		cout<<"\n\t\tAddition Of Digit is    : "<<obj2.SumDigit()<<"\n";

		if(obj2.ChkStrong())
			{
				cout<<"\n\t\tNumber is STRONG\n";
			}
		else
			{
				cout<<"\n\t\tNumber is NOT STRONG\n";
			}

		if(obj2.ChkArmStrong())
			{
				cout<<"\n\t\tNumber is ARMSTRONG\n";
			}
		else
			{
				cout<<"\n\t\tNumber is NOT ARMSTRONG\n";
			}
		cout<<"\n\n";
	}









			
