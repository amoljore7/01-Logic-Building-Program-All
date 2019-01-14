#include<iostream>

using namespace std;

void Display()
{
	static int i = 1;
	
	if(i <= 3)
		{
			cout<<i<<"\t";
			i++;
			
			Display();
		}
}

int main(int argc, char *argv[])
{
	Display();
	
	return 0;
}
