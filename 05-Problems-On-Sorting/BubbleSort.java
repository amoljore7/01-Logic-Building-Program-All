import java.io.*;
import java.lang.*;

class BubbleSort
{
	public static void main(String args[])
	{
		int Brr[]={4,2,6,3,8,2,9,1};

		Sorting sobj = new Sorting();
		sobj.BubbleSort(Brr,1);
	}
}

class Sorting
{
	public void BubbleSort(int Arr[],int op)
	{
		int i=0,j=0,temp=0,x=0,y=0,sorted=1;

		if(op == 1)
		{
			x=0;
			y=1;
		}
		else
		{
			x=1;
			y=0;
		}


		for(i=0;i<Arr.length && (sorted ==1);i++)
		{
			//sorted=0;
			for(j=0;j<Arr.length-1-i;j++)
			{
				if(Arr[j+x] > Arr[j+y])
				{
					temp = Arr[j+x];
					Arr[j+x]=Arr[j+y];
					Arr[j+y]=temp;
					sorted =1;
				}
			}
		}
		for(i=0;i<Arr.length;i++)
		{
			System.out.print(" "+Arr[i]);
		}
	
	}
}