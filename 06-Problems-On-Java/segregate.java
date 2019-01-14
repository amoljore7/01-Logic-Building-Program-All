class segregatee
{
	public void seg(int Arr[])
	{
		int Start =0;
		int End = Arr.length-1;

		while(Start < End)
		{
			while((Arr[Start]==11)&&(Start < End))
			{
				Start++;
			}
			while((Arr[End]==21)&&(Start < End))
			{
				End--;
			}

			if((Arr[Start]==21)&&(Arr[End]==11))
			{
				Arr[Start]=11;
				Arr[End]=21;
			}
		}
	}
}

class segregate
{
	public static void main(String arg[])
	{ 
		int Brr[]={21,21,11,21,11,11,21,11};

		segregatee sobj = new segregatee();

		sobj.seg(Brr);
		for(int value:Brr)
		{
			System.out.print("  "+value);
		}
	}
}