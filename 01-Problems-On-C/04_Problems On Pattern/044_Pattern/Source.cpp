#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	char i = 0, j = 0;
	if (iRow <= 0)
	{
		return;
	}
	if (iCol <= 0)
	{
		return;
	}
	i=65;
	j=65;
	for (i = 65; i <=65+iRow; i++)
	{
		for (j = 65; j <=65+iCol; j++)
		{
			if ((i == 65) || (j == 65) || (i == 65+iRow) || (j == 65+iCol))
			{
				printf("%c ",j);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}

int main(int argc,char *argv[])
{
	int iNum1=0;
	int iNum2=0;
	
	printf("\t\tEnter Row Number:\t");
	scanf("%d",&iNum1);
	fflush(stdin);
	
	printf("\t\tEnter Coloum Number:\t");
	scanf("%d",&iNum2);
	
	Pattern(iNum1,iNum2);
	
	return 0;
}

