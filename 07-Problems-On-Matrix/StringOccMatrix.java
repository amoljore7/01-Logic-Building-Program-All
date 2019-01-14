import java.util.Scanner;
import java.util.*;
import java.lang.*;
import java.io.*;


class Demo
{
	public void Search (char Arr[][],String str)
	{
		int i=0,j=0,k=0,RC=0,CC=0,Slength=0,iCnt=0;

		char Str[] = str.toCharArray();

		RC = Arr.length;
		CC = Arr[0].length;
System.out.println("Row Count "+RC);
System.out.println("Col Count "+CC);
		Slength = Str.length;

		for(i=0;i<RC;i++)
		{
			for(j=0;j<CC;j++)
			{
				if(Arr[i][j] == Str[0])
				{
					if(j<=(CC - Slength))
					{
						for(k=0;k < Slength;k++)
						{
							if(Arr[i][j+k] != Str[k])
							{
								break;
							}

						}
					if(k==Slength)
						{
							iCnt++;
						}
					}


					if(i<=(RC - Slength))
					{
						for(k=0;k < Slength;k++)
						{
							if(Arr[i+k][j] != Str[k])
							{
								break;
							}

						}
					if(k==Slength)
						{
							iCnt++;
						}
					}

				}
			}
		}
		System.out.println("\n\nString Foundet Time of : "+iCnt);
	}
}


class StringOccMatrix
{
	public static void main(String args[])
	{
		Demo dobj = new Demo();

		Scanner sobj = new Scanner(System.in);

		System.out.print("Enter No. Of Row's : ");
		int Row = sobj.nextInt();

		System.out.print("Enter No. of Col's : ");
		int Col = sobj.nextInt();

		char Brr[][] = new char[Row][Col];

		System.out.println("Enter "+ Row * Col +" Character in Matrix :");
		for(int i=0;i<Brr.length;i++)
		{
			int p=i;
				System.out.print("Enter Row No : "+p);
				System.out.println("");
			for(int j=0;j<Brr[i].length;j++)
			{
				Brr[i][j] =sobj.next().charAt(0);
			}
		
		} 
		System.out.println("Your Matrix is LIKE :");
		for(int i=0;i<Brr.length;i++)
		{
			for(int j=0;j<Brr[i].length;j++)
			{
				System.out.print(Brr[i][j]+" ");
			}
			System.out.println("");
		} 


	Scanner s= new Scanner(System.in);
	System.out.println("Accept String from user");
	String str = s.nextLine();
	System.out.println("Stirng is "+str);

		dobj.Search(Brr,str);
	}
}