import java.io.*;
import java.lang.*;

class InsertionSort
{
	public static void main(String args[])
	{
		int Brr[]={4,2,6,3,8,2,9,1};

		Sorting sobj = new Sorting();
		sobj.InsertionSort(Brr);
	}
}

class Sorting
{
	public void InsertionSort(int Arr[])
	{
		int i=0,j=0,temp=0,key=0;



		for(i=1;i<Arr.length;i++)
		{
			key=Arr[i];
			j=i-1;

			while((j>=0)&&(Arr[j] > key))
			{
				Arr[j+1]=Arr[j];
				j=j-1;
			}
			Arr[j+1]=key;
		}
		for(i=0;i<Arr.length;i++)
		{
			System.out.print(" "+Arr[i]);
		}
	
	}
}