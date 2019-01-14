#include<stdio.h>
void Pattern(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int i=0;
	int j=0;
	for(i=iNo;i>0;i--)
	{
		printf("%d ",iNo);
		for(j=iNo;j>0;j--)
		{
			printf("# ");
		}
		iNo--;
	}
}
int main(int argc,char* argv[])
 {
 	int iNo;
 	printf("\t\t Enter Number Or Alphabet: ");
 	scanf("%d",&iNo);

	 Pattern(iNo);

 	return 0;
 }
