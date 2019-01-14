import java.io.*;
import java.util.*;

class Loop
{
	public void Demo(int Brr[])
	{
		System.out.println("For Loop");
		for(int i =0;i < Brr.length;i++)
		{
			System.out.print("\t"+Brr[i]);
		}
		System.out.println("\n");
	}
	
	public void Demo1(int Brr[])
	{
		System.out.println("While Loop");
		int i =0;
		while(i<Brr.length)
		{
			System.out.print("\t"+Brr[i]);
			i++;
		}
		System.out.println("\n");
	}	

	public void Demo2(int Brr[])
	{
		System.out.println("Do While");
		int i =0;
		do
		{

			System.out.print("\t"+Brr[i]);
			i++;
		}while(i<Brr.length);
		System.out.println("\n");
	}
	public void Demo3(int Brr[])
	{
		System.out.println("For Each Loop");

		for(int iValue : Brr)
		{
			System.out.print("\t"+iValue);
		}
		System.out.println("\n");
	}

}


class AllLoop
{
	public static void main (String args[])
	{
		System.out.println("\n");
		System.out.println("Enter SIZE in Array");
		Scanner sobj = new Scanner(System.in);
		int iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		System.out.println("Enter Element in Array");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		Loop lp = new Loop();

		lp.Demo(Arr);
		lp.Demo1(Arr);
		lp.Demo2(Arr);
		lp.Demo3(Arr);

		System.out.println("\n\n");
	}
}