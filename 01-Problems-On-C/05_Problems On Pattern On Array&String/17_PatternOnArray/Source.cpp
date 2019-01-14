#include<stdio.h>
#include<malloc.h>

void Pattern(int arr[], int iSize)
{
	int i=0,j=0,k=0;
	
	if((NULL==arr)||(iSize<0))
	{
		return;
	}	
	int iDigit=0;
	int iRev=0;
	
	
	for(i=0;i<iSize;i++)
	{
		if(i%2==1)
				{
					for(j=0;j<iSize;j++)
						{
							k=arr[j];
							iDigit=k%10;
							
							k=k/10;
							iDigit=iDigit*10+k;
							printf("%d ",iDigit);	
						}
					printf("\n");	
				}
		else
				{
					for(j=0;j<iSize;j++)
						{
							printf("%d ",arr[j]);	
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
