import java.io.*;
import java.lang.*;

class SelectionSort
{
	public static void main(String args[])
	{
		int Brr[]={4,2,6,3,8,2,9,1};

		Sorting sobj = new Sorting();
		sobj.SelectionSort(Brr);
	}
}

class Sorting
{
	public void SelectionSort(int Arr[])
	{
		int i=0,j=0,temp=0,Min=0;



		for(i=0;i<Arr.length;i++)
		{
			Min=i;
			for(j=i+1;j<Arr.length;j++)
			{
				if(Arr[j] < Arr[Min])
				{
					Min=j;
				}
			}

			if(Min != i)
				{
					temp = Arr[i];
					Arr[i]=Arr[Min];
					Arr[Min]=temp;
					
				}
		}
		for(i=0;i<Arr.length;i++)
		{
			System.out.print(" "+Arr[i]);
		}
	
	}
}