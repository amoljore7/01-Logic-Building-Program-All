#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

#define TRUE	1
#define FALSE	0

typedef int BOOL;

struct Node 
{
	int Data;
	struct Node *Next;
};

	void InsertFirst(struct Node**, int);
	int SearchFisrtOcc(struct Node*,int);
	int SearchLastOcc(struct Node*,int);
	int Addition(struct Node*);
	int Maximum(struct Node*);
	int Minimum(struct Node*);
	void Display(struct Node*);
	


		
int main(int argc, char *argv[])
{
	printf("\n------------------------Assingment No 30 All Operation-----------------------------\n\n");
		
		int iRet = 0;
		int bRet = 0;
		
		struct Node *first = NULL;
		
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		
		while(1)
		{
		
		printf("01.Insert\n02.Search First\n03.Search Last\n04.Addition Node\n05.Maximum Node\n06.Minimum Node\n07.Display\n08.EXIT\n\n");

		printf("Enter Your Choice\t");
		scanf("%d",&iChoice);
		printf("\n");
		
		switch(iChoice)
			{
				case 1:
					{
						printf("Enter Value To Insert In Node\t");
						scanf("%d",&iValue);
						InsertFirst(&first, iValue);
						printf("\nInserted Node is = %d\n",iValue);
						break;	
					 } 
						
				case 2: 
					{
						printf("Enter Value To Search first Occurecnce In Node\t");
						scanf("%d",&iNum);
						fflush(stdin);
						bRet = SearchFisrtOcc(first,iNum);
						printf("\nNode Occurece Position : %d ",bRet);
						break;	
					}
						
				case 3:
					{
						printf("Enter Value To Search Last Occurecnce In Node\t");
						scanf("%d",&iNum);
						fflush(stdin);
						bRet = SearchLastOcc(first,iNum);
						printf("\nNode Occurece Position : %d ",bRet);
						break;	
					} 
						
				case 4:
					{
						printf("Addioton In Node\t");
						
						bRet = Addition(first);
						printf("Additon is : %d ",bRet);
						break;	
					} 
				case 5:
					{
						printf("Maximum In Node\t");
						
						bRet = Maximum(first);
						printf("\tMaximum Node is : %d ",bRet);
						break;	
					} 
				case 6:
					{
						printf("Minimum In Node\t");
						
						bRet = Minimum(first);
						printf("\tMinimum Node is : %d ",bRet);
						break;	
					}
				case 7:
					{
						printf("Display In Node\t");
						
						Display(first);
						break;	
					}	
				case 8: 
					{
						exit(0);
					}
				default:
					{
						printf("\nPLz Enter Valide Operation\n");
					
						break;	
					}
					
			}
			printf("\n---------------------------------------------------------------------------------------\n");
			printf("\n");
	}
	
	return 0;
}

void InsertFirst(struct Node **Head, int iValue)
	{
		printf("\tInsert First\n");
		struct Node *newNode = NULL;
		
		newNode =(struct Node*)malloc(sizeof(struct Node));
		
		newNode ->Data = iValue;
		newNode ->Next = NULL;
		
		if(*Head == NULL)
			{
				*Head = newNode;
			}
		else
			{
				newNode -> Next = *Head;
				*Head = newNode;
			}
	}

void Display(struct Node *Head)
	{	
		
		while(Head != NULL)
			{
				printf(" %d -->",Head ->Data);
				Head = Head -> Next;
			}
		
	}

int SearchFisrtOcc(struct Node *Head, int iValue)	
	{
		int iCnt = 0;
		while(Head != NULL)
			{
				iCnt++;
				if((Head -> Data)== iValue)
				{
					break;
				}
				Head = Head ->Next;		
			}	
		return iCnt;	
	}
int SearchLastOcc(struct Node *Head, int iValue)	
	{	

		int iCnt = 0;
		int iNum = 0;
	
		while(Head != NULL)
			{
				iCnt++;
				if((Head -> Data)== iValue)
				{
					if(iCnt >= iCnt)
					{
						iNum = iCnt;
					}
				}
				Head = Head ->Next;		
			}
		
		return iNum;
	}
int Addition(struct Node *Head)	
	{
		int iSum = 0;
			while(Head != NULL)
			{
				iSum = iSum + Head ->Data;
				Head = Head -> Next;
			}
		return iSum;	
	}
int Maximum(struct Node *Head)	
	{
		int iMax = 0;
		while(Head != NULL)
			{
				if((Head -> Data) > iMax )
					{
						iMax = Head -> Data;
					}
				Head = Head -> Next;
			}	
		return iMax;
	}
int Minimum(struct Node *Head)	
	{
		int iMin = Head -> Data;
		
		while(Head != NULL)
		{
			if((Head -> Data) < iMin)
				{
					iMin = Head -> Data;
				}
			Head = Head -> Next;
		}
		return iMin;
	}















