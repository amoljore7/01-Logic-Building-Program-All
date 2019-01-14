#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
	{
		int Data;
		struct Node *Next;
	};


void InsertFirst(struct Node**,int);
void InsertLast(struct Node**,int);
void InsertAtPosition(struct Node**,int,int);

void DeleteFirst(struct Node**);
void DeleteLast(struct Node**);
void DeleteAtPosition(struct Node**,int);

void Display(struct Node*);

int Count(struct Node*);


int main(int argc, char *argv[])
{
		struct Node *first = NULL;
		int iRet=0;
		
		InsertFirst(&first,111);
		InsertFirst(&first,101);
		InsertFirst(&first,51);
		InsertFirst(&first,21);
		InsertFirst(&first,11);
		
		Display(first);
		iRet = Count(first);
		printf("\n\nTotal No.of Node is -> %d\n",iRet);
		
		InsertLast(&first,121);
		Display(first);
		
		DeleteFirst(&first);
		Display(first);
		
		DeleteLast(&first);
		Display(first);
		
		InsertAtPosition(&first,151,5);
		Display(first);
		
		DeleteAtPosition(&first,4);
		Display(first);
		
	return 0;
}

void InsertFirst(struct Node **Head,int iValue)
	{
		printf("\n\t\tInsertFirst\n");
			struct Node *newNode = NULL;
			
			newNode = (struct Node*)malloc(sizeof(struct Node));
			
			newNode -> Data=iValue;
			newNode -> Next=NULL;
			
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
		printf("\n\t\tDisplay\n");
		printf("\n\nElement in Linked List Are :\n\n");
			while(Head != NULL)
				{
					printf(" %d -->",Head->Data);
					Head = Head->Next;
				}
			printf(" NULL");
			printf("\n-------------------------------------------------------\n");
	}
int Count(struct Node *Head)
	{
		printf("\n\t\tIn Count\n");
		int iCnt = 0;
		
		while(Head != NULL)
			{
				iCnt++;
				Head = Head -> Next;
			}
	return iCnt;	
		
	}
void InsertLast(struct Node **Head,int iValue)
	{
		printf("\n\t\tInsertLast\n");
		struct Node *newNode = NULL;
		struct Node *Temp = *Head;
		
		newNode = (struct Node*)malloc(sizeof(struct Node));
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;
		
		if(*Head == NULL)
			{
				*Head = newNode;
			}
		else
			{
				while(Temp -> Next != NULL)
					{
						Temp = Temp -> Next;
					}
					Temp -> Next = newNode;
			}
	}
void DeleteFirst(struct Node **Head)
	{
		printf("\n\t\tDeleteFirst\n");
		struct Node *Temp=*Head;
		
		if(*Head == NULL)
			{
				printf("\nIt is NULL\n");
				return;		
			}			
		else
			{
				*Head =(*Head)-> Next;
				free(Temp);
			}
	}
void DeleteLast(struct Node **Head)
	{
		printf("\n\t\tDeleteLast\n");
		struct Node *Temp = *Head;
		
		if(*Head == NULL)
			{
				return ;
			}
		else if((*Head) -> Next==NULL)
			{
				free(Temp);
				*Head = NULL;	
			}
		else
			{

				while(Temp ->Next -> Next != NULL)
					{
						Temp = Temp -> Next;
					}
				free(Temp -> Next);
				Temp -> Next = NULL;
			}
	}
void InsertAtPosition(struct Node **Head, int iValue, int iPos)
	{
		printf("\n\t\tInsertAtPosition\n");
			struct Node* Temp = *Head;
			struct Node* newNode=NULL;
			
			int iSize = Count(*Head);
			int i = 0;
			
			newNode=(struct Node*)malloc(sizeof(struct Node));
			
			newNode -> Data =iValue;
			newNode -> Next = NULL;
			
			if ( (iPos < 1) || (iPos >(iSize + 1))	)
				{
					printf("\nPlz Enter Valide Position");
					return;		
				}	
			if(iPos == 1)
				{
					InsertFirst(Head,iValue);
				}
			else if(iPos == iSize)
				{
					InsertLast(Head,iValue);
				}
			else
				{
					for(i=1;i<=(iPos-2);i++)
						{
							Temp = Temp -> Next;
						}
					newNode -> Next =Temp -> Next;
					Temp -> Next = newNode;
				}
	}	
 void DeleteAtPosition(struct Node **Head,int iPos)
 	{
		printf("\n\t\tDeleteAtPosition\n");
 			struct Node *Temp1 = *Head;
			struct Node *Temp2 = NULL;
			
			int iSize = Count(*Head);
			int i = 0;
			
			if((iPos < 1) || (iPos > iSize))	
				{
					printf("Plz Enter Valide Position\n");
					return;
				}
			if(iPos == 1)
				{
					DeleteFirst(Head);
				}
			else if(iPos == iSize)
				{
					DeleteLast(Head);
				}
			else
				{
					for(i=1; i<=(iPos-2);i++)
						{
							Temp1 = Temp1 -> Next;
						}
					Temp2 = Temp1 -> Next;
					Temp1 -> Next = Temp2 -> Next;
					free(Temp2);
				}
	 }		
