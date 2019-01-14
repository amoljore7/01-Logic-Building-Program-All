class segregatee
{
	public void seg(int Arr[])
	{
		int Start =0;
		int End = Arr.length-1;
		int Temp=0;
		while(Start < End)
		{
			while((Arr[Start] % 2 ==0)&&(Start < End))
			{
				Start++;
			}
			while((Arr[End] % 2== 1)&&(Start < End))
			{
				End--;
			}

			if((Arr[Start] % 2 == 1)&&(Arr[End] %2 == 0))
			{
				Temp = Arr[Start];
				Arr[Start]=Arr[End];
				Arr[End]=Temp;
			}
		}
	}
}

class segregateEvenOdd
{
	public static void main(String arg[])
	{ 
		int Brr[]={12,34,45,9,8,90,3};

		segregatee sobj = new segregatee();

		sobj.seg(Brr);
		for(int value:Brr)
		{
			System.out.print("  "+value);
		}
	}
}