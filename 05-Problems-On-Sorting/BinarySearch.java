import java.io.*;
import java.util.*;

class Searching
{
	public static int ChkSorted(int Arr[],int No)
	{
		int Start =0;
		int End = (Arr.length)-1;

		int Mid=(Start + End)/2;
		System.out.println(No);
		while(Start <= End)
		{
			if(Arr[Mid]== No)
			{
				break;
			}
			if(No > Arr[Mid])
			{
				Start = Mid +1;
			}
			else if(No < Arr[Mid])
			{
				End = Mid -1;
			}

		Mid = (Start + End)/2;
		}
	if(Start > End)
	{
		return -1;
	}
	else
	{
		return Mid;
	}
	}
}


class BinarySearch
{
	public static void main(String args[])
	{
		Searching obj = new Searching();
		int Ret;
		int Arr[]={10,20,30,40,50,60,70,80,90};

		Ret = obj.ChkSorted(Arr,70);
			System.out.println("Element Found Index : "+Ret);	
		
		
	}
}









