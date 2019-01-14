import java.io.*;
import java.util.*;

class JaggedArray
{
	public static void main(String args[])
	{
		System.out.println("\n");
		System.out.println("2D Array");
		Scanner sobj = new Scanner(System.in);

		int first = 0;
		int second =0;
		int i = 0;
		int j =0;

		System.out.println("Enter SIZE of ROW Array");
		first = sobj.nextInt();

		System.out.println("Enter SIZE of COLOUM Array");
		second = sobj.nextInt();

		int Arr[][] = new int[first][second];
		System.out.println("Enter Element in Array");
		for(i = 0; i < first; i++)
		{
			for(j= 0; j < second; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
			
		}

		System.out.println("Element Are : ");
		for(i = 0; i < first; i++)
		{
			for(j=0; j< second;j++)
			{
				System.out.print("\t"+Arr[i][j]);
			}
			System.out.print("\n");
		}
		System.out.println("\n");
		System.out.println("Jagged Array ");

		int Brr[][] = new int[4][];

		Brr[0] = new int[4];
		Brr[1] = new int[2];
		Brr[2] = new int[0];
		Brr[3] = new int[5];

		for(i =0; i< Brr.length;i++)
		{
			System.out.println("Row No "+(i+1));
			for(j =0; j <Brr[i].length;j++)
			{
				System.out.print("\t"+Brr[i][j]);
			}
				System.out.println("\n");
		}
	}
}