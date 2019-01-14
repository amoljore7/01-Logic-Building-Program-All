#include<stdio.h>
#include<stdlib.h>
void Matrix(int**,int,int,int,int);
int main(int argc, char* argv[])
{
    int i = 0,j = 0;
    int iRow = 0,iCol = 0;
    int **iArr = NULL;
    int iNo1 = 0,iNo2 = 0;

    printf("Enter The Total No.of Rows	: ");
    scanf("%d",&iRow);
    
    printf("\nEnter The Total No.of Column	: ");
    scanf("%d",&iCol);

    iArr = (int**)malloc(iRow * sizeof(int*));

    if(iArr == NULL)
    {
    	return -1;
    	printf("\nMemory Allocation Failed \n");
    }
    
    for(i = 0 ; i < iRow ; i++)
    {
    	iArr[i] = (int*)malloc(iRow * sizeof(int));
    }
    
    printf("\nEnter the %d Elements	: \n",(iRow * iCol));
    for(i = 0 ; i < iRow ; i++)
    {
    	for(j = 0 ; j < iCol ; j++)
    	{
    		scanf("%d",&iArr[i][j]);
    	}
    }
    
    printf("Enter The Row and Columns to print matrix : \n");
    scanf("%d",&iNo1);

    iNo2 = iNo1;
    
    Matrix(iArr,iRow,iCol,iNo1,iNo2);

    return 0;
}

void Matrix(int **iArr,int iRow,int iCol,int iNo1,int iNo2)
{
	int iStart = 0,iEnd = 0;
    int iCol1 = 0,iRow1 = 0;
	int i = 0,j = 0;
	int iMax = 0,iSum = 0;
              
        if((iNo1 <= iRow) && (iNo2 <= iCol))
        {
                for(i = 0 ; i < iRow ; i++)
                {
                    for(j = 0 ; j < iCol ; j++)
                    {
                        printf("%d ",iArr[i][j]);
                    }
                    printf("\n");
                }
              
                printf("\n\n");

                while(iRow1 <= (iRow - iNo1))
                {  
                    while(iCol1 <= (iCol - iNo2))
                    {
                        for(i = (0 + iRow1) ; i < (iNo1 + iRow1) ; i++)
                        {
                            for(j = (0 + iCol1) ; j < (iNo2 + iCol1) ; j++)
                            {
                                iSum = iSum + iArr[i][j];  
                            }
                        }
                  
                        if(iMax < iSum)
                        {
                            iMax	  = iSum;
                            iStart 	  = i;
                            iEnd	  = j;
                        }

                        iSum = 0;
                        iCol1++;
                    }
                    iRow1++;
                    iCol1 = 0;
                }
        }
        else
        {
            printf("Your Input Is INVALID Please Enter Valide Input : \n");
        }
	if((iNo1  <= iRow) && (iNo2 <= iCol))
	{
       		printf("MAXIMUM SUM MATRIX : \n\n");
        	for(i = iStart - iNo1 ; i < iStart ; i++)
        	{
        	    for(j = iEnd - iNo2 ; j < iEnd ; j++)
        	    {
        	        printf("%d ",iArr[i][j]);
        	    }
        	    printf("\n");
        	}
       	      	printf("\nSUM = %d\n",iMax);
	}
}

