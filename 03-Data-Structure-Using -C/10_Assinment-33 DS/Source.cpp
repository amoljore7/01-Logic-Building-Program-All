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
	
	int LLCopyEx(struct Node*,struct Node**);
	int SubList(struct Node*,struct Node*);
	int CopyAsc(struct Node*,struct Node**);
	int ListReverse(struct Node**);

	int CountSrc(struct Node*);
	int CountDest(struct Node*);
	


		
int main(int argc, char *argv[])
{
	printf("\n------------------------Assingment No 33 All Operation-----------------------------\n\n");
		
		int iRet = 0;
		int bRet = 0;
		
		struct Node *first = NULL;
		struct Node *second = NULL;
		
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		
		while(1)
		{
		
		printf("01.Insert Source LL\n02.Insert Destination LL\n03.Display Source LL\n04.Display Destination LL\n05.LL Copy Ex\n06.Sub List\n07.Copy Ascending\n08.List Reverse\n09.Count Node Source\n10.Count Node Dest\n11.EXIT\n\n");

		printf("Enter Your Choice\t");
		scanf("%d",&iChoice);
		printf("\n");
		
		switch(iChoice)
			{
				case 1:
					{
						printf("Enter Value To FIRST LL \t");
						scanf("%d",&iValue);
						InsertFirst(&first, iValue);
						break;	
					 } 
				case 2:
					{
						printf("Enter Value To Second LL \t");
						scanf("%d",&iValue);
						InsertFirst(&second, iValue);
						break;	
					 }
						
				case 3: 
					{
						printf("\n\n FIRST Linked list is => ");
						Display(first);
						break;	
					}
						
				case 4:
					{
						printf("\n\n Second Linked list is => ");
						Display(second);
						break;				
					}
				case 5: 
					{
						LLCopyEx(first,&second);

						printf("\n\n After Copying Node of Dest. linked list is=> ");
						Display(second);
						break;	
					}
				case 6: 
					{
						bRet = SubList(first,second);
							if(bRet == 0)
							{
								printf("\n\nSublist not fount.");
							}
							else
							{
								printf("\n\nFirst sublist is position => %d",bRet);
							}
						break;
					}
				case 7: 
					{
						CopyAsc(first,&second);
						printf("\nThe Destination linked list is =>");
						Display(second);
						break;
					}
				case 8: 
					{
									
							ListReverse(&first);
							printf("\nThe linked list is =>");
							Display(first);
							break;
					}
				case 9: 
					{
						bRet = CountSrc(first);
						printf("\nCount Of Source Node In linked list is => %d",bRet);
						break;
					}
				case 10: 
					{
						bRet = CountDest(second);
						printf("\nCount Of Destination Node In linked list is =>%d",bRet);
						break;
					}				
				case 11: 
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
int LLCopyEx(struct Node *Src,struct Node **Dest)
	{
		struct Node *Temp = *Dest;
		struct Node *newNode = NULL;
		
		int iDigit = 0;
		int iSum = 0;
		int iNum = 0;
		
		if(Src == NULL)
			{
				return -1;
			}
		while(Src != NULL)
			{	
					iNum = Src -> Data;
					
					while(iNum != 0)
						{
							iDigit = iNum % 10;
							iSum = iSum + iDigit;
							iNum = iNum / 10;
						}
						
						if((iSum % 2) == 0)
							{
								newNode = (struct Node*) malloc(sizeof(struct Node));
								
								newNode -> Data = Src -> Data;
								newNode -> Next = NULL;
								
								if(*Dest == NULL)
									{
										*Dest = Temp = newNode;
									}
								else
									{
										Temp -> Next = newNode;
										Temp = newNode;	
									}
							}
				Src = Src -> Next;
				iSum = 0;
					
			}
		return -1;
	}
int SubList(struct Node *Src,struct Node *Dest)
	{
		struct Node *Temp1 = Src;
		struct Node *Temp2 = Dest;
		
		int iPos = 1;
		
		if((NULL == Src) || (NULL == Dest))
			{
				return -1;
			}
			
		while((Temp1 != NULL) && (Temp2 != NULL))
			{
					if( Temp1 -> Data == Temp2 -> Data)
						{
							Temp1 = Temp1 -> Next;
							Temp2 = Temp2 -> Next;	
						}
					else if(Temp1 == Src)
						{
							iPos++;
							Temp2 = Temp2 -> Next;
						}
					else
						{
							iPos++;
							Temp1 = Src;
						}	
			}
		if(Temp1 == NULL)
			{
				return iPos;	
			}
		else
			{
				return 0;	
			}	
	}
int CopyAsc(struct Node *Src,struct Node **Dest)
	{
		struct Node *newNode = NULL;
		struct Node *Temp1 = NULL;
		struct Node *Temp2 = NULL;
		
		if(Src == NULL)
			{
				return -1;		
			}	
		
		while(Src != NULL)
			{
				newNode = (struct Node*)malloc(sizeof(struct Node));
				
					if(newNode == NULL)
						{
							return -1;
						}
				newNode -> Data = Src -> Data;
				newNode -> Next = NULL;
				
				if(*Dest == NULL)
					{
						*Dest = newNode;
					}
				else if(newNode -> Data  <  (*Dest) -> Data)
					{
						newNode -> Next = *Dest;
						*Dest = newNode;
					}
				else if(newNode -> Data  >  (*Dest) -> Data)
					{
						Temp1 = *Dest;
						while(Temp1 != NULL  && (Temp1 -> Data < newNode -> Data))
							{
								Temp2 = Temp1;
								Temp1 = Temp1 -> Next;
							}
						newNode -> Next = Temp1;
						Temp2 -> Next = newNode;
					}
				
				Src = Src -> Next;
			}
		return -1;
	}
int ListReverse(struct Node **Src)
	{
		struct Node *Temp = *Src;
		int *Ptr = NULL;
		int iCnt = 0;
		
		if(*Src == NULL)
			{
				return -1;		
			}
		Ptr = (int*) malloc(sizeof(int) * CountSrc(*Src));
		
		while(Temp != NULL)
			{
				Ptr[iCnt++] = Temp -> Data;
				Temp = Temp -> Next;		
			}
					
		Temp = *Src;
		
		while(Temp != NULL)
			{
				Temp -> Data = Ptr[--iCnt];
				Temp = Temp -> Next;	
			}
		return -1;
	}
int CountSrc(struct Node *Src)
	{
		int iCount=0;
	
		if(Src != NULL)
			{
				while(Src != NULL)
				{
					Src = Src -> Next;
					iCount++;
				}
			}
		else
			{
				printf("\nNode Node In LL\n");
				return 0;
			}
		return iCount;	
	}
int CountDest(struct Node *Dest)
	{
		int iCount=0;
	
		if(Dest != NULL)
			{
					while(Dest != NULL)
					{
						Dest = Dest -> Next;
						iCount++;
					}
			}
		else
			{
				printf("\nNode Node In LL\n");
				return 0;
			}
		return iCount;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	





