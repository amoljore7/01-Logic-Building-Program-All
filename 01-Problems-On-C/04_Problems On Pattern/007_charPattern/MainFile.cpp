 #include<stdio.h>
 void Pattern(int iNo,char ch)
 {
 	if(iNo<0)
 	{
 		iNo=-iNo;
	}
	int iCnt=0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%c\t",ch);
	}
 }
 
 
 int main(int argv,char* argc[])
{
	int iNum=0;
	char cCh='\0';
	
	printf("\t\tEnter The  Number: ");
	scanf("%d",&iNum);

	printf("\t\tEnter The Character: ");
	fflush(stdin);
	scanf("%c",&cCh);
	
	Pattern(iNum,cCh);
	
return 0;
}
