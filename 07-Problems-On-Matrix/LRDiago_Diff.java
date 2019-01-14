import java.util.Scanner;

class LRDiago_Diff
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

		int Ans = dobj.DiagonalDiff(Brr);
		System.out.print("Difference is :"+Ans);
	}

}

class Demo
{
	public int DiagonalDiff(int Arr[][])
	{
		int i=0,j=0,sum1=0,sum2=0,size=Arr.length;

		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				if(i==j)
				{
					sum1=sum1 + Arr[i][j];
				}
				if((i+j)==(size-1))
				{
					sum2 = sum2 + Arr[i][j];
				}
			}
		}
		return sum1-sum2;
	}

}

//







