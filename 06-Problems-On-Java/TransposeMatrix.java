import java.io.*;
import java.util.*;

class TransposeMatrix
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter No. of Row :");
		int Row = sobj.nextInt();
		System.out.println("Enter No. of Coloum :");
		int Col = sobj.nextInt();

		int Arr[][] = new int[Row][Col];
		System.out.println("Accept Element of Matrix :");
		for(int i=0;i < Row;i++)
		{
			for(int j=0;j < Col;j++)
			{

				Arr[i][j]=sobj.nextInt();
			}
		}

		System.out.println("Transpose Matrix :");
		for(int i=0;i < Col;i++)
		{
			for(int j=0;j < Row;j++)
			{
				System.out.print(Arr[j][i]+" ");
			}
				System.out.print("\n");
		}
	}
}