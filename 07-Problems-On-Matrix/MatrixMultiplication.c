#include<stdio.h>
#include<malloc.h>

int main(int argc,char *argv[])
{
	int A[3][3];
	int B[3][3];
	int C[3][3];
	
	int i,j,k,sum;
	
	printf("Enter Element For First Array\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d ",&A[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Element For Second Array\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d ",&B[i][j]);
		}
			printf("\n");
	}
	

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum=0;
			for(k=0;k<=2;k++)
			{
				sum = sum + A[i][k] * B[k][j];
			}
			C[i][j]=sum;
		}
	}
	

	printf("Matrix Multiplication is : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
