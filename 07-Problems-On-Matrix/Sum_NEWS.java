import java.util.Scanner;

class Sum_NEWS
{
	public static void main(String args[])
	{
		Demo dobj = new Demo();

		Scanner sobj = new Scanner(System.in);

		System.out.print("Enter No. of Row's ");
		int Row = sobj.nextInt();

		System.out.println("Enter No. of Col's ");
		int Col = sobj.nextInt();

		int Brr[][] = new int [Row][Col];

		System.out.println("Enter "+Row*Col+" Element ");
		for(int i=0;i<Brr.length;i++)
		{
			for(int j=0;j<Brr[i].length;j++)
			{
				Brr[i][j] = sobj.nextInt();
			}
		}


		System.out.println("You Have Entered Element is :");
		for(int i=0;i<Brr.length;i++)
		{
			for(int j=0;j<Brr[i].length;j++)
			{
				System.out.print(Brr[i][j]+" ");
			}
			System.out.println("");
		}

		dobj.Display(Brr);
		
	}

}

class Demo
{
	public void Display(int Arr[][])
	{
		int i,j;
		for(i=0;i<Arr.length-2;i++)
		{

			for(j=0;j<Arr[0].length-2;j++)
			{
				if ( (Arr[i][j]) == (Arr[i-1][j] + Arr[i+1][j] + Arr[i][j+1] + Arr[i][j-1]) )
				{
					System.out.println(Arr[i][j]);
				}				
			}
			System.out.println(Arr[i][j]);
		}
	}

}










