#include<stdio.h>
#include<malloc.h>

void Pattern(int arr[], int iSize)
{
	int i = 0, j = 0,k=1;
	if (arr <= 0)
	{
		return;
	}
	if (iSize <= 0)
	{
		return;
	}
	
	for (i = 0; i <=iSize-1; i++)
	{
		if(i%2 ==0)
		{
		for (j = 0; j <=iSize-1; j++)
		{
			if(j%2 == 1)
			{
				printf("00 ");
			}
			else
			{
				printf("%d ", arr[j]);	
			}
		
		}
		
		printf("\n");
		}
		else
		{
		for (j = iSize-1; j>=0; j--)
		{
			if(j%2 == 1)
			{
				printf("00 ");
			}
			else
			{
				printf("%d ", arr[j]);	
			}
		}
		
		printf("\n");
		}
		
	}
}

int main()
{

int *ptr = NULL;
int iLength = 0,i = 0;

printf("Enter number of Elements : \t");
scanf("%d",&iLength);

ptr = (int *)malloc(iLength * sizeof(int));
	if(NULL == ptr)
	{
	printf("Error in memory allocation\n");
	return -1;
	}
for(i = 0; i< iLength; i++)
	{
	printf("Enter elemennt no : %d\t",i+1);
	scanf("%d",&ptr[i]);
	}
	printf("\n");
	Pattern(ptr,iLength);
	
return 0;	
	
}
