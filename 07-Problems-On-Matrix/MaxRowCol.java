import java.util.Scanner;

class Matrix
{
	public void RowMax(int Arr[][])
	{
		int i=0,j=0,iMax=0;
				System.out.println("Maximum Element In Each RowN : ");
		for(i=0;i<Arr.length;i++)
		{
			iMax = Arr[i][0];
			for(j=0;j<Arr[i].length;j++)
			{
				if(Arr[i][j] > iMax)
				{
					iMax = Arr[i][j];
				}
			}
			System.out.println(" "+iMax);
		}
	}
}

class MaxRowCol
{
	public static void main(String args[])
	{
		Matrix mobj = new Matrix();

		Scanner sobj = new Scanner(System.in);

		System.out.print("Enter No Of Row's : ");
		int Row = sobj.nextInt();

		System.out.print("Enter No Of Coloum's : ");
		int Col = sobj.nextInt();

		int Brr[][] = new int[Row][Col];


		System.out.println("Enter All the Elements in Matrix : ");
		for (int i=0;i<Brr.length;i++)
		{
			for(int j=0;j<Brr[i].length;j++)
			{
				Brr[i][j] = sobj.nextInt();
			}
		}
		
		
		mobj.RowMax(Brr);		
	}
}