#include<stdio.h>
#include<malloc.h>

void Pattern(int arr[], int iSize)
{
	int i=0,j=0;
	if((NULL==arr)||(iSize<0))
	{
		return;
	}
	printf("\n");
	for(i=0;i<iSize;i++)
	{
		for(j=0;j<iSize;j++)
		{
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
	printf("\n");
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
