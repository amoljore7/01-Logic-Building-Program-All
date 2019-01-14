#include<stdio.h>
#include<malloc.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: OneDimentional Array  To   ElevenDimentional Array
//		Description		: Accept N Number of Dimentionas
//		Input			: int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void OneDimentional()
{
	int *p=NULL;
	int iCol=0;
	int i=0;
	
	printf("Enter Number Of Element: \t");
	scanf("%d",&iCol);
	
	p=(int*)malloc(iCol * sizeof(int));
	
	printf("\nEnter The Element :\n");
	for(i=0;i<iCol;i++)
		{
		//	printf("\t\tEnter Element No:\t%d\n",i+1);
			scanf("%d ",&p[i]);
		}
		
	printf("\n");
	printf("Element in 1D Array Are:\n");
	printf("\n");
	for(i=0;i<iCol;i++)
		{
			printf("%d ",p[i]);
		}
		printf("\n\n");
	printf("Free Of Allocate Memory of 1D Array\n");
	
	free(p);
	printf("\nMemory DeAllocated Succesfully\n");
}

void TwoDimentional()
{
	int **p=NULL;
	int iRow=0,iCol=0;
	int i=0,j=0;
	
	printf("Enter Number Of Row: ");
	scanf("%d",&iRow);
	printf("\n");
	printf("Enter Number Of Coloum: ");
	scanf("%d",&iCol);
	
	p=(int**)malloc(iRow * sizeof(int*));
	
	for(i=0;i<iRow;i++)
		{
			p[i]=(int*)malloc(iCol * sizeof(int));
		}
	printf("\n");
	printf("Enter Element In Array:\n");
	for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
				{
					scanf("%d",&p[i][j]);
				}
		}
	printf("\n\n");
	printf("Element in 2D Array:\n");
	
	for(i=0;i<iRow;i++)
		{
			printf("\n");
			for(j=0;j<iCol;j++)
				{
					printf("%d ",p[i][j]);
				}
		}
	printf("\n\n");
	printf("Free the Allocate Memory Of 2D Array: ");
	for(i=0;i<iRow;i++)
		{
			free(p[i]);		
		}	
	free(p);
	printf("\nMemory DeAllocated Succesfully\n");
		
}

void ThreeDimentional()
{
	int ***p=NULL;
	int First=0,Second=0,Third=0;
	int i=0,j=0,k=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	
	p=(int***)malloc(First * sizeof(int**));
	
	for(i=0;i<First;i++)
		{
			p[i]=(int**)malloc(Second * sizeof(int*));
			 
			 for(j=0;j<Second;j++)
			 	{
			 		p[i][j]=(int*)malloc(Third * sizeof(int));
			 	
				 }
		}
	printf("\n\n");
	printf("Enter The Elements:\n");
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					scanf("%d",&p[i][j][k]);
				}
			}
		}
	printf("\n\n");
	printf("Elements in 3D Array:\n");
	for(i=0;i<First;i++)
		{
			printf("\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n");
				for(k=0;k<Third;k++)
				{
					printf("%d",p[i][j][k]);
				}
			}
		}
	printf("\n\nFree The Allocate Memory of 3D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void FourDimentional()
{
	int ****p=NULL;
	int First=0,Second=0,Third=0,Fourth=0;
	int i=0,j=0,k=0,l=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	
	p=(int****)malloc(First * sizeof(int***));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int***)malloc(Second * sizeof(int**));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int**)malloc(Third * sizeof(int*));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int*)malloc(Fourth * sizeof(int));
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							scanf("%d",&p[i][j][k][l]);
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 4D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("%d ",p[i][j][k][l]);
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 3D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void FiveDimentional()
{
	int *****p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0;
	int i=0,j=0,k=0,l=0,m=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	
	p=(int*****)malloc(First * sizeof(int****));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int****)malloc(Second * sizeof(int***));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int***)malloc(Third * sizeof(int**));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int**)malloc(Fourth * sizeof(int*));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int*)malloc(Fifth * sizeof(int));
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								scanf("%d",&p[i][j][k][l][m]);
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 5D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("%d ",p[i][j][k][l][m]);
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 5D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void SixDimentional()
{
	int ******p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0,Six=0;
	int i=0,j=0,k=0,l=0,m=0,n=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	printf("Enter Six Dimention:\t");
	scanf("%d",&Six);
	printf("\n");
	
	p=(int******)malloc(First * sizeof(int*****));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int*****)malloc(Second * sizeof(int****));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int****)malloc(Third * sizeof(int***));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int***)malloc(Fourth * sizeof(int**));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int**)malloc(Fifth * sizeof(int*));
								
									for(m=0;m<Six;m++)
									{
										p[i][j][k][l][m]=(int*)malloc(Six * sizeof(int));
									}
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
									{
										scanf("%d",&p[i][j][k][l][m][n]);
									}
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 6D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("\n");
									for(n=0;n<Six;n++)
									{
										printf("%d ",p[i][j][k][l][m][n]);
									}
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 6D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							for(m=0;m<Fifth;m++)
							{
								free(p[i][j][k][l][m]);
							}
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void SevenDimentional()
{
	int *******p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0,Six=0,Seven=0;
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	printf("Enter Six Dimention:\t");
	scanf("%d",&Six);
	printf("\n");
	printf("Enter Seven Dimention:\t");
	scanf("%d",&Seven);
	printf("\n");
	
	p=(int*******)malloc(First * sizeof(int******));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int******)malloc(Second * sizeof(int*****));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int*****)malloc(Third * sizeof(int****));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int****)malloc(Fourth * sizeof(int***));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int***)malloc(Fifth * sizeof(int**));
								
									for(m=0;m<Six;m++)
									{
										p[i][j][k][l][m]=(int**)malloc(Six * sizeof(int*));
										{
											for(n=0;n<Seven;n++)
											{
													p[i][j][k][l][m][n]=(int*)malloc(Seven * sizeof(int));
											}
										}
									}
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
									{
										for(o=0;o<Seven;o++)
										{
											scanf("%d",&p[i][j][k][l][m][n][o]);
										}
									}
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 7D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("\n");
									for(n=0;n<Six;n++)
									{
										printf("\n");
										for(o=0;o<Seven;o++)
										{
											printf("%d ",p[i][j][k][l][m][n][o]);
										}
									}
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 7D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
								{
									free(p[i][j][k][l][m][n]);
								}
								free(p[i][j][k][l][m]);
							}
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}


void EightDimentional()
{
	int ********p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0,Six=0,Seven=0,Eight=0;
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0,q=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	printf("Enter Six Dimention:\t");
	scanf("%d",&Six);
	printf("\n");
	printf("Enter Seven Dimention:\t");
	scanf("%d",&Seven);
	printf("\n");
	printf("Enter Eight Dimention:\t");
	scanf("%d",&Eight);
	printf("\n");
	
	p=(int********)malloc(First * sizeof(int*******));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int*******)malloc(Second * sizeof(int******));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int******)malloc(Third * sizeof(int*****));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int*****)malloc(Fourth * sizeof(int****));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int****)malloc(Fifth * sizeof(int***));
								
									for(m=0;m<Six;m++)
									{
										p[i][j][k][l][m]=(int***)malloc(Six * sizeof(int**));
										{
											for(n=0;n<Seven;n++)
											{
													p[i][j][k][l][m][n]=(int**)malloc(Seven * sizeof(int*));
													
													for(o=0;o<Eight;o++)
														{
															p[i][j][k][l][m][n][o]=(int*)malloc(Seven * sizeof(int));	
														}
											}
										}
									}
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
									{
										for(o=0;o<Seven;o++)
										{
											for(q=0;q<Eight;q++)
												{
													scanf("%d",&p[i][j][k][l][m][n][o][q]);
												}
										}
									}
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 8D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("\n");
									for(n=0;n<Six;n++)
									{
										printf("\n");
										for(o=0;o<Seven;o++)
										{
											printf("\n");
											for(q=0;q<Eight;q++)
												{
													printf("%d ",p[i][j][k][l][m][n][o][q]);
												}
										}
									}
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 8D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
								{
									for(o=0;o<Seven;o++)
									{
										free(p[i][j][k][l][m][n][o]);
									}
									free(p[i][j][k][l][m][n]);
								}
								free(p[i][j][k][l][m]);
							}
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void NineDimentional()
{
	int *********p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0,Six=0,Seven=0,Eight=0,Nine=0;
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0,q=0,r=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	printf("Enter Six Dimention:\t");
	scanf("%d",&Six);
	printf("\n");
	printf("Enter Seven Dimention:\t");
	scanf("%d",&Seven);
	printf("\n");
	printf("Enter Eight Dimention:\t");
	scanf("%d",&Eight);
	printf("\n");
	printf("Enter Nine Dimention:\t");
	scanf("%d",&Nine);
	printf("\n");
	
	p=(int*********)malloc(First * sizeof(int********));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int********)malloc(Second * sizeof(int*******));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int*******)malloc(Third * sizeof(int******));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int******)malloc(Fourth * sizeof(int*****));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int*****)malloc(Fifth * sizeof(int****));
								
									for(m=0;m<Six;m++)
									{
										p[i][j][k][l][m]=(int****)malloc(Six * sizeof(int***));
										{
											for(n=0;n<Seven;n++)
											{
													p[i][j][k][l][m][n]=(int***)malloc(Seven * sizeof(int**));
													
													for(o=0;o<Eight;o++)
														{
															p[i][j][k][l][m][n][o]=(int**)malloc(Seven * sizeof(int*));
															
															for(q=0;q<Nine;q++)
																{
																	p[i][j][k][l][m][n][o][q]=(int*)malloc(Eight * sizeof(int));			
																}	
														}
											}
										}
									}
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
									{
										for(o=0;o<Seven;o++)
										{
											for(q=0;q<Eight;q++)
												{
													for(r=0;r<Nine;r++)
													{
														scanf("%d",&p[i][j][k][l][m][n][o][q][r]);
													}
												}
										}
									}
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 9D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("\n");
									for(n=0;n<Six;n++)
									{
										printf("\n");
										for(o=0;o<Seven;o++)
										{
											printf("\n");
											for(q=0;q<Eight;q++)
												{
													printf("\n");
													for(r=0;r<Nine;r++)
														{
															printf("%d ",p[i][j][k][l][m][n][o][q][r]);
														}
												}
										}
									}
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 9D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
								{
									for(o=0;o<Seven;o++)
									{
										for(q=0;q<Eight;q++)
											{
												free(p[i][j][k][l][m][n][o][q]);
											}
											free(p[i][j][k][l][m][n][o]);
									}
									free(p[i][j][k][l][m][n]);
								}
								free(p[i][j][k][l][m]);
							}
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void TenDimentional()
{
	int **********p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0,Six=0,Seven=0,Eight=0,Nine=0,Ten=0;
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0,q=0,r=0,s=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	printf("Enter Six Dimention:\t");
	scanf("%d",&Six);
	printf("\n");
	printf("Enter Seven Dimention:\t");
	scanf("%d",&Seven);
	printf("\n");
	printf("Enter Eight Dimention:\t");
	scanf("%d",&Eight);
	printf("\n");
	printf("Enter Nine Dimention:\t");
	scanf("%d",&Nine);
	printf("\n");
	printf("Enter Ten Dimention:\t");
	scanf("%d",&Ten);
	printf("\n");
	
	p=(int**********)malloc(First * sizeof(int*********));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int*********)malloc(Second * sizeof(int********));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int********)malloc(Third * sizeof(int*******));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int*******)malloc(Fourth * sizeof(int******));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int******)malloc(Fifth * sizeof(int*****));
								
									for(m=0;m<Six;m++)
									{
										p[i][j][k][l][m]=(int*****)malloc(Six * sizeof(int****));
										{
											for(n=0;n<Seven;n++)
											{
													p[i][j][k][l][m][n]=(int****)malloc(Seven * sizeof(int***));
													
													for(o=0;o<Eight;o++)
														{
															p[i][j][k][l][m][n][o]=(int***)malloc(Seven * sizeof(int**));
															
															for(q=0;q<Nine;q++)
																{
																	p[i][j][k][l][m][n][o][q]=(int**)malloc(Eight * sizeof(int*));	
																	
																	for(r=0;r<Ten;r++)
																		{
																			p[i][j][k][l][m][n][o][q][r]=(int*)malloc(Nine * sizeof(int));			
																		}		
																}	
														}
											}
										}
									}
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
									{
										for(o=0;o<Seven;o++)
										{
											for(q=0;q<Eight;q++)
												{
													for(r=0;r<Nine;r++)
													{
														for(s=0;s<Ten;s++)
														{
															scanf("%d",&p[i][j][k][l][m][n][o][q][r][s]);
														}
													}
												}
										}
									}
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 10D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("\n");
									for(n=0;n<Six;n++)
									{
										printf("\n");
										for(o=0;o<Seven;o++)
										{
											printf("\n");
											for(q=0;q<Eight;q++)
												{
													printf("\n");
													for(r=0;r<Nine;r++)
														{
															printf("\n");
															for(s=0;s<Ten;s++)
															{
																printf("%d ",p[i][j][k][l][m][n][o][q][r][s]);
															}
														}
												}
										}
									}
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 10D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
								{
									for(o=0;o<Seven;o++)
									{
										for(q=0;q<Eight;q++)
											{
												for(r=0;r<Nine;r++)
												{
													free(p[i][j][k][l][m][n][o][q][r]);
												}
												free(p[i][j][k][l][m][n][o][q]);
											}
											free(p[i][j][k][l][m][n][o]);
									}
									free(p[i][j][k][l][m][n]);
								}
								free(p[i][j][k][l][m]);
							}
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}

void ElevenDimentional()
{
	int ***********p=NULL;
	int First=0,Second=0,Third=0,Fourth=0,Fifth=0,Six=0,Seven=0,Eight=0,Nine=0,Ten=0,Eleven=0;
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0,q=0,r=0,s=0,t=0;
	
	printf("Enter First Dimention:\t");
	scanf("%d",&First);
	printf("\n");
	printf("Enter Second Dimention:\t");
	scanf("%d",&Second);
	printf("\n");
	printf("Enter Third Dimention:\t");
	scanf("%d",&Third);
	printf("\n");
	printf("Enter Fourth Dimention:\t");
	scanf("%d",&Fourth);
	printf("\n");
	printf("Enter Fifth Dimention:\t");
	scanf("%d",&Fifth);
	printf("\n");
	printf("Enter Six Dimention:\t");
	scanf("%d",&Six);
	printf("\n");
	printf("Enter Seven Dimention:\t");
	scanf("%d",&Seven);
	printf("\n");
	printf("Enter Eight Dimention:\t");
	scanf("%d",&Eight);
	printf("\n");
	printf("Enter Nine Dimention:\t");
	scanf("%d",&Nine);
	printf("\n");
	printf("Enter Ten Dimention:\t");
	scanf("%d",&Ten);
	printf("\n");
	printf("Enter Eleven Dimention:\t");
	scanf("%d",&Eleven);
	printf("\n");
	
	p=(int***********)malloc(First * sizeof(int**********));
		
		for(i=0;i<First;i++)
			{
				p[i]=(int**********)malloc(Second * sizeof(int*********));
				
				for(j=0;j<Second;j++)
					{
						p[i][j]=(int*********)malloc(Third * sizeof(int********));
						
						for(k=0;k<Third;k++)
						{
							p[i][j][k]=(int********)malloc(Fourth * sizeof(int*******));
							
							for(l=0;l<Fourth;l++)
							{
								p[i][j][k][l]=(int*******)malloc(Fifth * sizeof(int******));
								
									for(m=0;m<Six;m++)
									{
										p[i][j][k][l][m]=(int******)malloc(Six * sizeof(int*****));
										{
											for(n=0;n<Seven;n++)
											{
													p[i][j][k][l][m][n]=(int*****)malloc(Seven * sizeof(int****));
													
													for(o=0;o<Eight;o++)
														{
															p[i][j][k][l][m][n][o]=(int****)malloc(Seven * sizeof(int***));
															
															for(q=0;q<Nine;q++)
																{
																	p[i][j][k][l][m][n][o][q]=(int***)malloc(Eight * sizeof(int**));	
																	
																	for(r=0;r<Ten;r++)
																		{
																			p[i][j][k][l][m][n][o][q][r]=(int**)malloc(Nine * sizeof(int*));
																			
																			for(s=0;s<Ten;s++)
																				{
																					p[i][j][k][l][m][n][o][q][r][s]=(int*)malloc(Ten * sizeof(int));			
																				}			
																		}		
																}	
														}
											}
										}
									}
							}
						}
					}
			}
	printf("\n\n");
	printf("Enter The Element:\n");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
						{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
									{
										for(o=0;o<Seven;o++)
										{
											for(q=0;q<Eight;q++)
												{
													for(r=0;r<Nine;r++)
													{
														for(s=0;s<Ten;s++)
														{
															for(t=0;t<Eleven;t++)
															{
																scanf("%d",&p[i][j][k][l][m][n][o][q][r][s][t]);
															}
														}
													}
												}
										}
									}
							}
						}
				}
			}
		}
	printf("\n\n");
	printf("Element in 11D Array:\n");
	
	for(i=0;i<First;i++)
		{
			printf("\n\n\n");
			for(j=0;j<Second;j++)
			{
				printf("\n\n");
				for(k=0;k<Third;k++)
				{
					printf("\n");
					for(l=0;l<Fourth;l++)
						{
							printf("\n");
							for(m=0;m<Fifth;m++)
								{
									printf("\n");
									for(n=0;n<Six;n++)
									{
										printf("\n");
										for(o=0;o<Seven;o++)
										{
											printf("\n");
											for(q=0;q<Eight;q++)
												{
													printf("\n");
													for(r=0;r<Nine;r++)
														{
															printf("\n");
															for(s=0;s<Ten;s++)
															{
																printf("\n");
																for(t=0;t<Eleven;t++)
																{
																	printf("%d ",p[i][j][k][l][m][n][o][q][r][s][t]);
																}
															}
														}
												}
										}
									}
								}
						}
				}
			}
		}
		
	printf("\n\nFree The Allocate Memory of 11D Array: ");
	
	for(i=0;i<First;i++)
		{
			for(j=0;j<Second;j++)
			{
				for(k=0;k<Third;k++)
				{
					for(l=0;l<Fourth;l++)
					{
							for(m=0;m<Fifth;m++)
							{
								for(n=0;n<Six;n++)
								{
									for(o=0;o<Seven;o++)
									{
										for(q=0;q<Eight;q++)
											{
												for(r=0;r<Nine;r++)
												{
													for(s=0;s<Ten;s++)
													{
														free(p[i][j][k][l][m][n][o][q][r][s]);
													}
													free(p[i][j][k][l][m][n][o][q][r]);
												}
												free(p[i][j][k][l][m][n][o][q]);
											}
											free(p[i][j][k][l][m][n][o]);
									}
									free(p[i][j][k][l][m][n]);
								}
								free(p[i][j][k][l][m]);
							}
							free(p[i][j][k][l]);
					}
						free(p[i][j][k]);
				}
				free(p[i][j]);
			}
		free(p[i]);
		}
	free(p);
	printf("\n\nMemory DeAllocated Succesfully\n");
	
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: main
//		Description		: Entry Point Function
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	int iChoice =0;
	
	printf("\t\tEnter Your Choice:\n");
	printf("\n\n");
	printf("1 :  One Dimentional\n2 :  Two Dimentional\n3 :  Three Dimentional\n4 :  Four Dimentional\n5 :  Five Dimentional\n6 :  Six Dimentional\n7 :  Seven Dimentional\n8 :  Eight Dimentional\n9 :  Nine Dimentional\n10:  Ten Dimentional\n11:  Eleven Dimentional\n");
	printf("\n");
	scanf("%d",&iChoice);
	printf("\n");
	
	switch(iChoice)
		{
			case 1:
				{
					OneDimentional();
					break;	
				}
			case 2:
				{
					TwoDimentional();
					break;	
				}
			case 3:
				{
					ThreeDimentional();
					break;	
				}
			case 4:
				{
					FourDimentional();
					break;	
				}
			case 5:
				{
					FiveDimentional();
					break;	
				}
			case 6:
				{
					SixDimentional();
					break;	
				}
			case 7:
				{
					SevenDimentional();
					break;	
				}
			case 8:
				{
					EightDimentional();
					break;	
				}
			case 9:
				{
					NineDimentional();
					break;	
				}
			case 10:
				{
					TenDimentional();
					break;
				}
			case 11:
				{
					ElevenDimentional();
					break;
				}
				
			default:
				{
					printf("\t\tNot Valide Choice\n");
				}
		}
		printf("\n\n");
		printf("\t\t Author Name: Amol Balasaheb Jore\n\n\n");
	return 0;
}