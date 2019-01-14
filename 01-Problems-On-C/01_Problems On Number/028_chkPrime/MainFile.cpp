#include<stdio.h>
void chkPrime(int iNo)
{
	if(iNo==0)
		{
			return ;
		}
	if(iNo<0)
		{
			iNo=-iNo;	
		}	
		
					int i=0;
					for(i=2;i<=iNo;i++)
						
							if((iNo%i)==0)
							{
								break; 
							}
												
							if(i==iNo)
							{
								printf("\t\t%d is Prime No\t",iNo);
							}
							else
							{
								printf("\t\t%d is Not Prime No\t",iNo);
							}
}
int main()
{
	int iValue=0;
	printf("\t\tEnter A No: ");
	scanf("%d",&iValue);
	chkPrime(iValue);	
	return 0;
}
