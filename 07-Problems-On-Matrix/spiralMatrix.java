import java.util.Scanner;

class Demo
{
	public void Spiral(int Arr[][])
	{
		int i=0,Top,Bottom,Left,Right;

		Top=0;
		Bottom=Arr.length-1;
		Left=0;
		Right=Arr[0].length-1;
		System.out.println("Output is : ");
		while(true)
		{
			if(Left > Right)
			{
				break;
			}
			for(i=Top; i<= Right;i++)
			{
				System.out.print(Arr[Top][i]+" ");
			}
			Top++;

			if(Top > Bottom)
			{
				break;
			}
			for(i=Top; i<= Bottom;i++)
			{
				System.out.print(Arr[i][Right]+" ");
			}
			Right--;

			if(Left > Right)
			{
				break;
			}
			for(i=Right;i>= Left;i--)
			{
				System.out.print(Arr[Bottom][i]+" ");
			}
			Bottom--;

			if(Top > Bottom)
			{
				break;
			}
			for(i=Bottom;i>=Top;i--)
			{
				System.out.print(Arr[i][Left]+" ");
			}
			Left++;
		}
	}
}


class spiralMatrix
{
	public static void main(String args[])
	{
		Demo dobj = new Demo();

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter No of Row's : ");
		int Row = sobj.nextInt();

		System.out.println("Enter No of Col's : ");
		int Col = sobj.nextInt();

		int Brr[][] = new int [Row][Col];

		System.out.println("Enter "+Row*Col+" Elements is Matrix : ");
		for(int i=0; i< Brr.length;i++)
		{
			for(int j=0;j < Brr[i].length;j++)
			{
				Brr[i][j] = sobj.nextInt();
			}
		}


		System.out.println("Elements On Matrix is: ");
		for(int i=0; i< Brr.length;i++)
		{
			for(int j=0;j < Brr[i].length;j++)
			{
				System.out.print(Brr[i][j]+" ");
			}
			System.out.println("");
		}

		dobj.Spiral(Brr);
	}
}