import java.util.Scanner;

class Mirror_Mat
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

		boolean Ans = dobj.ChkMirror(Brr);

		if(Ans== true)
			{
				System.out.print(" TRUE Mirror Matrix");
			}
		else
		{
			System.out.print(" FALSE NOT Mirror Matrix");
		}
		
	}

}

class Demo
{
	public boolean ChkMirror(int Arr[][])
	{
		boolean flag = true;
		int i=0,j=0,Start=0,End=0;
		int SizeC= Arr[0].length;
		int SizeR=Arr.length;
			
		for(Start=0,End=SizeR-1; (Start < End && flag);Start++,End--)
		{
			for(j=0;j<SizeR;j++)
			{
				if(Arr[Start][j] != Arr[End][j])
				{
					flag = false;
					break;
				}
			}
			return flag;
		}

		return flag;
	}

}










