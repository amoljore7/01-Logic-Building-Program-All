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
	void Display(struct Node*);
	
	void DisplayPerfect(struct Node *Head);
	void DisplayPrime(struct Node *Head);
	int AdditionEven(struct Node *Head);
	int SecMaximum(struct Node *Head);
	void SumDigit(struct Node *Head);
	


		
int main(int argc, char *argv[])
{
	printf("\n------------------------Assingment No 31 All Operation-----------------------------\n\n");
		
		int iRet = 0;
		int bRet = 0;
		
		struct Node *first = NULL;
		
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		
		while(1)
		{
		
		printf("01.Insert\n02.Display\n03.Display Perfect\n04.Display Prime\n05.Addition Even\n06.Second Maximum\n07.Sum Of Digit\n08.EXIT\n\n");

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
						printf("Display In Node\t");
						
						Display(first);
						break;	
					}
						
				case 3:
					{
											
						DisplayPerfect(first);
						
						break;	
					}	
				case 4:
					{	
						DisplayPrime(first);
						
						break;
					}
				case 5:
					{						
						bRet = AdditionEven(first);
						
						printf("\nAddition is = %d\n",bRet);
						break;
					}
				case 6:
					{
						bRet = SecMaximum(first);
						
						printf("\nSecond Max Node is = %d\n",bRet);
						break;	
					}
				case 7:
					{
						SumDigit(first);
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
void DisplayPerfect(struct Node *Head)
	{
		int iSum = 0;
		int iCnt = 0;
		printf("\nPerfect Node is : ");
		
		while(Head != NULL)
			{
				for(iCnt =1; iCnt <= ((Head -> Data) / 2); iCnt++)
					{
						if( ((Head -> Data) % iCnt) == 0)
							{
								iSum = iSum + iCnt;
							}
						
					}
				if(iSum == (Head -> Data))
					{
						printf("\t%d ",iSum);
					}
				iSum = 0;
				Head = Head -> Next;	
			}
	}
void DisplayPrime(struct Node *Head)
	{
		int iCnt = 0;
		printf("\nPrime Node is : ");
		
		while(Head != NULL)
			{
				for(iCnt = 2; iCnt <= (Head -> Data); iCnt++ )
					{
						if( ((Head -> Data) % iCnt)== 0)
							{
								break;	
							}	
					}
				if(iCnt == (Head -> Data))
					{
						printf("\t%d",Head -> Data);
					}
				Head = Head -> Next;
			}
	}
int AdditionEven(struct Node *Head)
	{
		int iCnt = 0;
		int iSum = 0;
		
		while(Head != NULL)
			{
				if( ((Head -> Data) % 2) == 0)
					{
						iSum = iSum + Head -> Data;	
					}
				Head = Head -> Next;		
			}
		return iSum;	
	}
int SecMaximum(struct Node *Head)
	{
			int i = 0;
			int iMax1 = Head -> Data;
			int iMax2 = Head -> Data;
		
				for(i = 0; i < (Head != NULL) ; i++)
					{
							if(( (Head->Data) > iMax1) && ((Head->Data) > iMax2))
								{
									iMax2 = iMax1;
									iMax1 = (Head->Data);	
								}	
							else if(((Head->Data) < iMax1) && ((Head->Data) > iMax2))
								{
									iMax2 = (Head->Data);
								}
							else if(iMax1 == iMax2)
								{
									iMax2 = (Head->Data);
								}
						Head = Head -> Next;
					}
					
		return iMax2;	
	
	}
void SumDigit(struct Node *Head)
	{
		int iDigit = 0;
		int iSum = 0;
		int iNum = 0;
		
		
		while(Head != NULL)
			{
				iNum = Head -> Data;
				
				while(iNum != 0)
				{
					iDigit = iNum % 10;
					iSum = iSum + iDigit;
					iNum = iNum / 10;
				}
			printf("\t%d ",iSum);
			iSum = 0;
			Head = Head -> Next;	
			}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
