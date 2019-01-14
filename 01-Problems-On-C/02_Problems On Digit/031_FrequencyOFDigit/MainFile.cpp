#include<stdio.h>
void Frequency(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;		
	}	
	int iArr[10]={0};
	int iDigit=0;
	int iCnt=0;
	while(iNo!=0)
	{
	 	iDigit=iNo%10;
	 	iArr[iDigit]++;
	 	iNo=iNo/10;
	
	}
	 for(iCnt=0;iCnt<10;iCnt++)
	 {
	 	if(iArr[iCnt]>0)
	 	{
	 	printf("\t\t%d -> %d\n",iCnt,iArr[iCnt]);
	 	}
	 }

}
int main(int argc,char* argv[])
{
	int iNum=0;
	printf("\t\tEnter A Number to Find Frequency: ");
	scanf("%d",&iNum);
	
	Frequency(iNum);
	return 0;
}
