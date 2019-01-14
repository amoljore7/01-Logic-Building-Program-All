import java.io.*;
import java.util.*;

class Demo
{
	public static int ChkSorted(int Arr[])
	{
		boolean Inc =false, Dec = true;
		int i =0;

		for (i=0; i< Arr.length -1;i++)
		{
			if(Arr[i] > Arr[i+1])
			{
				Dec = true;
			}
			else if(Arr[i] < Arr[i+1])
			{
				Inc = true;
			}

			if((Inc == true) && (Dec == true))
			{
				break;
			}
		}
		if((Inc == true) && (Dec == false))
		{
			return 1;
		}
		else if((Inc == false) && (Dec == true))
		{
			return 2;
		}
		else if((Inc == false) && (Dec == false))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


class ArraySearching
{
	public static void main(String args[])
	{
		Demo obj = new Demo();
		int Ret;
		int Arr[]={12,54,67,87,98,65,34};

		Ret = obj.ChkSorted(Arr);
		if (Ret == 1)
		{
			System.out.println("Incressing Order");
		}
		else if (Ret == 2)
		{
			System.out.println("Decressing Order");
		}
		if (Ret == 0)
		{
			System.out.println("Unsorted");
		}
	}
}









