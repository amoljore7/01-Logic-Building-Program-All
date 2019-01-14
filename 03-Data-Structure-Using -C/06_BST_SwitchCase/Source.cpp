#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE	1
#define FALSE	0

typedef int BOOL;

struct Node
	{
		int Data;
		struct Node *RChild;
		struct Node *LChild;
	};
	


void Insert(struct Node **Root, int iValue)
{
	struct Node *newNode = NULL;
	struct Node *Temp = *Root;
	
	newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode -> Data = iValue;
	newNode -> RChild = NULL;
	newNode -> LChild = NULL;
	
	if(*Root == NULL)	
		{
			*Root = newNode;
		}
	else
		{
			while(1)
				{
					if(iValue > Temp -> Data)
						{
							if(Temp -> RChild == NULL)
								{
									Temp -> RChild = newNode;
									break;
								}
								Temp = Temp -> RChild;
						}
					else if(iValue < Temp -> Data)
						{
							if(Temp -> LChild == NULL)
								{
									Temp -> LChild = newNode;
									break;
								}
								Temp = Temp -> LChild;
						}
					else if(iValue == Temp -> Data)
						{
							free(newNode);
							break;
						}
				}	//End Of While
		}	//End Of Else
}	//End Of Function

BOOL Search(struct Node *Root,int iValue)
	{
		if(Root == NULL)
			{
				return FALSE;		
			}	
		while(Root != NULL)
			{
				if(iValue == Root -> Data)
					{
						break;
					}
				else if(iValue > Root -> Data)
					{
					
						Root = Root -> RChild;	
					}
				else
					{
						Root = Root -> LChild;		
					}
			}
		if(Root == NULL)
			{
				return FALSE;
			}
		else
			{
				return TRUE;
			}
	}

int Count(struct Node *Root)
	{
		static int iCnt = 0;
		
		if(Root != NULL)
			{
				iCnt++;
				
				Count(Root -> LChild);
				Count (Root -> RChild);		
			}		
		return iCnt;
	}
int CountLeafNode(struct Node *Root)
	{
		static int iCnt = 0;
	if(Root != NULL)
		{
				if((Root -> LChild == NULL) && (Root -> RChild == NULL))
					{
						iCnt ++;
					}
				CountLeafNode(Root -> LChild);
				CountLeafNode(Root -> RChild);
		}
		return iCnt;
	
	}

void Inorder(struct Node *Root)
	{
	
		if(Root != NULL)
			{
				Inorder(Root -> LChild);
				
				printf("%d\t",Root -> Data);
				
				Inorder(Root -> RChild);
			}
	}
void Preorder(struct Node *Root)
	{
		if(Root != NULL)
			{
				printf("%d\t",Root -> Data);
				Preorder(Root -> LChild);
				Preorder(Root -> RChild);
			}
	}
void Postorder(struct Node *Root)
	{
		if(Root != NULL)
			{
				Postorder(Root -> LChild);
				Postorder(Root -> RChild);
				printf("%d\t",Root -> Data);		
			}	
	}

int CountEvenNode(struct Node *Root)
	{
		static int iCnt = 0 ;
		
		if(Root != NULL)
			{
				if(((Root -> Data) % 2) == 0)
					{
						iCnt++;
					}
				CountEvenNode(Root -> LChild);
				CountEvenNode(Root -> RChild);
			}
		return iCnt;
	}

int CountOddNode(struct Node *Root)
	{
		static int iCnt = 0 ;
		
		if(Root != NULL)
			{
				if(((Root -> Data) % 2) == 1)
					{
						iCnt++;
					}
				CountOddNode(Root -> LChild);
				CountOddNode(Root -> RChild);
			}
		return iCnt;

}


int main(int argc, char* argv[])
	{
		printf("\n\t\tBinary Search Tree\n");
		printf("\t---------------------------------------\n");
		
		int iRet = 0;
		BOOL bRet = TRUE;
		
		struct Node *Head = NULL;
		
		int iChoice = 0;
		int iValue = 0;
		int iNum = 0;
		while(1)
		{
		
		printf("01.Insert\n02.Search\n03.Count\n04.Count Leaf Node\n05.Inorder\n06.Preorder\n07.Postorder\n08.Even Node\n09.Odd Node\n10.EXIT\n\n");

		printf("Enter Your Choice\t");
		scanf_s("%d",&iChoice);
		printf("\n");
		
		switch(iChoice)
			{
				case 1:
					{
						printf("Enter Value To Insert In Node\t");
						scanf_s("%d",&iValue);
						
						Insert(&Head,iValue);
						break;	
					 } 
						
				case 2: 
					{
						printf("Enter Value To Search In Node\t");
						scanf_s("%d",&iNum);
						
						bRet = Search(Head,iNum);
						
						if(bRet == TRUE)
							{
								printf("\nNumber is Available\n");
							}
						else
							{
								printf("\nNumber is NOT Available\n");	
							}
						break;	
					}
						
				case 3:
					{
						iRet = Count(Head);
						printf("\nTotal Count Of Node is = %d\n",iRet);
						break;	
					} 
						
				case 4:
					{
						iRet = CountLeafNode(Head);
						printf("\nTotal Count Of Leaf Node is = %d\n",iRet);
						break;	
					} 
						
				case 5: 
					{
						printf("\nData In Inorder = \t");
						Inorder(Head);
						break;	
					}
						
				case 6:
					{
						printf("\nData In Preorder = \t");
						Preorder(Head);
						break;	
					} 
						
				case 7: 
					{
						printf("\nData In Postorder = \t");
						Postorder(Head);
						break;	
					}
				case 8:
					{
						iRet = CountEvenNode(Head);
						printf("\nTotal Count Of Even Node is = %d\n",iRet);
						break;
					}
				case 9:
					{
						iRet = CountOddNode(Head);
						printf("\nTotal Count Of Odd Node is = %d\n",iRet);
						break;
					}
				case 10: 
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