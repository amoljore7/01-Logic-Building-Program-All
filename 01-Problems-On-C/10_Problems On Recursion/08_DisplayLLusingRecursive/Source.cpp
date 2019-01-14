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
	


		
int main(int argc, char *argv[])
{
	printf("\n---------------------------------------------------------------------------------\n\n");
		
		int iRet = 0;
		int bRet = 0;
		
		struct Node *first = NULL;
		
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		
		while(1)
		{
		
		printf("01.Insert\n02.Display\n03.EXIT\n\n");

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
		
		if(Head != NULL)
			{
				printf(" %d -->",Head ->Data);
				Display(Head -> Next);
			}
		
	}















