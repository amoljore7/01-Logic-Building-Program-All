#include<stdio.h>
 void Display(char ch)
 {
 		if(ch>=65&&ch<=91)
 		{
 			printf("\t\tIt is Capital");
		 }
		 if(ch>=97&&ch<=123)
 		{
 			printf("\t\tIt is small");
		}
		if(ch>=0)
		{
			printf("\t\tIt is Digit");
		}
 }
 int main(int argc,char* argv[])
 {
 	char iNo;
 	printf("\t\t Enter Number Or Alphabet: ");
 	scanf("%c",&iNo);
 	
 	Display(iNo);
 	return 0;
 }
