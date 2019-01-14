 #include<stdio.h>
 void Pattern(int iNo)
 {
 	if(iNo<0)
 	{
 		iNo=-iNo;
	}
	int iCnt=0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("\t%c\t",'A');
	}
 }
 
 
 int main(int argv,char* argc[])
{
	int iNum=0;
	
	printf("\t\tEnter The  Number: ");
	scanf("%d",&iNum);
	
	Pattern(iNum);
	
return 0;
}
