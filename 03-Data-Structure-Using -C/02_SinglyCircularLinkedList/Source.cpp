#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
	{
		int Data;
		struct Node *Next;
	};
	
void InsertFirst(struct Node**,struct Node**,int);
void InsertLast(struct Node**,struct Node**,int);
void InsertAtPosition(struct Node**,struct Node**,int,int);

void DeleteFirst(struct Node**,struct Node**);
void DeleteLast(struct Node**,struct Node**);
void DeleteAtPosition(struct Node**,struct Node**,int);

void Display(struct Node*,struct Node*);

int Count(struct Node*,struct Node*);	
	
int main(int argc,char *argv[])
	{
		struct Node *first = NULL;
		struct Node *last = NULL;
		
		int iRet = 0;
		
		InsertFirst(&first,&last,151);
		InsertFirst(&first,&last,51);
		InsertFirst(&first,&last,11);
		Display(first,last);
		
		InsertLast(&first,&last,101);
		Display(first,last);
	
		
		InsertAtPosition(&first,&last,21,2);
		Display(first,last);
		
		DeleteFirst(&first,&last);
		Display(first,last);
		
		DeleteLast(&first,&last);
		Display(first,last);
		
		DeleteAtPosition(&first,&last,2);
		Display(first,last);
			
		iRet = Count(first,last);
		printf("\t\nTotal Count of Node is : %d\n",iRet);
		printf("\n-------------------------------------------------------\n");		
	}	

void InsertFirst(struct Node **Head,struct Node **Tail,int iValue)
	{
		printf("\n\t\tInsertFirst\n");
		struct Node *newNode = NULL;
		
		newNode = (struct Node*)malloc (sizeof(struct Node));
		
		newNode -> Data = iValue;
		newNode -> Next = NULL;
		
		if((*Head == NULL) || (*Tail == NULL))
			{
				*Head = newNode;
				*Tail = newNode;
				(*Tail) -> Next = *Head;			
			}
		else
			{
				newNode -> Next = *Head;
				*Head = newNode;
				(*Tail) -> Next = *Head;
				
			}
	}
void Display(struct Node *Head,struct Node *Tail)
	{
		printf("\n\t\tIn Display\n\n");
		
		if((Head == NULL) && (Tail == NULL))
			{
				printf("\t\tNo Any Node In Linked List\n");
				return;
			}
			
		do
			{
				printf("%d ",Head -> Data);
				Head = Head -> Next;
				
			} while(Head != Tail ->Next);
			
		printf(" NULL");
		printf("\n-------------------------------------------------------\n");

	}

void InsertLast(struct Node **Head,struct Node **Tail,int iValue)
	{
			printf("\n\t\tInsertLast\n");
			
			struct Node *newNode = NULL;
			
			newNode = (struct Node*)malloc(sizeof(struct Node));
			
			newNode -> Data = iValue;
			newNode -> Next = NULL;
			
			if((*Head == NULL) && (*Tail == NULL))	
				{
					*Head = newNode;
					*Tail = newNode;
					(*Tail) -> Next = *Head;		
				}
			else
				{
					(*Tail) -> Next = newNode;
					(*Tail) = newNode;
					(*Tail) -> Next = *Head;		
						
				}	
	}
	
void InsertAtPosition(struct Node **Head,struct Node **Tail, int iValue, int iPos)
	{
		printf("\n\t\tIn InsertAtPos\n");
			struct Node *newNode = NULL;
			struct Node *Temp = *Head;
					
			int iSize = Count(*Head,*Tail);
			int i =0;
			
			if((iPos < 1) || (iPos > (iSize + 1 )))	
				{
					return;		
				}	
			if(iPos == 1)
				{
					InsertFirst(Head,Tail,iValue);
				}
			else if(iPos == (iSize + 1))
				{
					InsertLast(Head,Tail,iValue);
				}
			else
				{
					newNode = (struct Node*)malloc(sizeof(struct Node));
					
					newNode ->Data = iValue;
					newNode ->Next = NULL;
					
					for(i=1;i<=(iPos-2);i++)
						{
							Temp = Temp -> Next;
						}
					
						newNode -> Next = Temp -> Next;
						Temp -> Next = newNode;
					
				}			
	}
	
void DeleteFirst(struct Node **Head,struct Node **Tail)
	{
			printf("\n\t\tIn DeleteFirst\n");
			
			if((*Head == NULL) && (*Tail == NULL))
				{
					printf("\t\t No Node\n");
					return;
				}
			if((*Head) == (*Tail))
				{
					free(*Head);
					*Head = NULL;
					*Tail = NULL;
				}
			else
				{
					(*Head) = (*Head) -> Next;
					free( (*Tail) -> Next);
					(*Tail) -> Next = *Head;
					
				}
	}
void DeleteLast(struct Node **Head, struct Node **Tail)
	{
			printf("\n\t\tIn DeleteLast\n");
			
			struct Node *Temp = *Head;
			
			if((*Head == NULL) && (*Tail == NULL))
				{
					printf("\t\t No Node\n");
					return;
				}
			if((*Head) == (*Tail))
				{
					free(*Tail);
					*Head = NULL;
					*Tail = NULL;
				}
			else
				{
					while(Temp -> Next != (*Tail))
						{
							Temp = Temp -> Next;
						}
						
						free(*Tail);
						(*Tail) = Temp;
						(*Tail) -> Next = *Head;
					
				}	
	}	
void DeleteAtPosition(struct Node **Head,struct Node **Tail,int iPos)
	{
		printf("\n\t\tIn DeleteAtPos\n");
		
		struct Node *Temp = *Head;
		int iSize = Count(*Head,*Tail);
		int i = 0;
		
		if((iPos < 1) && (iPos > (iSize + 1 )))
			{
				return;
			}
		if(iPos == 1)
			{
				DeleteFirst(Head,Tail);
			}
		else if(iPos == iSize)
			{
				DeleteLast(Head,Tail);
			}
		else
			{
				for(i=1;i<=(iPos - 2);i++)
					{
						Temp = Temp -> Next;
					}	
				Temp = Temp -> Next;
				(*Head) -> Next = (*Tail);
				free(Temp);
			}
	
	}	
int Count(struct Node *Head,struct Node *Tail)
	{
		printf("\n\t\tIn Count\n");
		int iCnt = 0;
		if((Head == NULL) && (Tail == NULL))
			{
				printf("\t\t\nNo Any Node In Linked List\n");
				return -1;
			}
		else
			{
				do
				{
					iCnt++;
					Head = Head -> Next;
				} while(Head != Tail ->Next);
				
			}
		return iCnt;		
	}	
	















