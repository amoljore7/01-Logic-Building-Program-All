import java.io.*;
import java.lang.*;
import java.util.*;


Class Matrix_Diagonal
{
	public void Mat(int Arr[][])
	{
		int isum=0,Add=0,No=0,i=0,j=0;

		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				isum = isum + Arr[i][j];
			}
		}
		isum = isum *2;


		while(isum > 9)
		{
			No=isum;
			while(No!=0)
			{
				Add= Add + (No % 10);
				No = No /10;
			}
			isum = Add;
			Add=0;
		}
		System.out.println("Root is : "+isum);
		
	}
}

class Matrix
{
	public static void main(String args[])
	{
		
		Matrixx mobj = new Matrixx();
		int Brr[]= {{7,2,1},{3,5,9},{2,7,6}};
		mobj.Mat(Brr);
		
	}
}