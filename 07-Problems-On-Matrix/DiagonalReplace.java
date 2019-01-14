import java.util.Scanner;

class DiagonalReplace
{
	public static void main(String args[])
	{
		Demo dobj = new Demo();
		Scanner sobj = new Scanner(System.in);

		System.out.print("Enter No. Of Row's : ");
		int iRow = sobj.nextInt();

		System.out.print("Enter No. of Coloums : ");
		int iCol=sobj.nextInt();

		int Brr[][] = new int[iRow][iCol];

		System.out.println("Enter  "+  iRow*iCol+  "  Element ");
		for(int i=0;i<Brr.length;i++)
		{
				System.out.println("Enter Row No :"+ i + "  Row ");
			for(int j=0;j<Brr[i].length;j++)
			{

				Brr[i][j] = sobj.nextInt();
			}

			System.out.println("");
		}

		System.out.println("You have entered Matrix Is :");
		for(int p=0;p<Brr.length;p++)
		{
			for(int q=0;q<Brr[p].length;q++)
			{

				System.out.print(Brr[p][q]+"  ");
			}
			
			System.out.println("");
		}



		dobj.DiaRep(Brr);

	}
}

class Demo
{
	public void DiaRep(int Arr[][])
	{
		int i=0,j=0,Maxi,Maxj,Temp=0;

		for(i=0;i<Arr.length;i++)
		{
			Maxi = i;
			Maxj = 0;
			 for(j=0;j<Arr[i].length;j++)
			 {
			 		if(Arr[i][j] > Arr[Maxi][Maxj])
			 		{
			 			Maxi =i;
			 			Maxj = j;
			 		}
			 }
				Temp = Arr[Maxi][Maxj];
				Arr[Maxi][Maxj] = Arr[i][i];
				Arr[i][i] = Temp;
		}

	 System.out.println("After Diagonal Changing :");
		for(int p=0;p<Arr.length;p++)
		{
			for(int q=0;q<Arr[p].length;q++)
			{

				System.out.print(Arr[p][q]+"  ");
			}
			
			System.out.println("");
		}
	}
}











