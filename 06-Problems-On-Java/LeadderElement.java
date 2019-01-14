import java.lang.*;

class leadder
{
	public void printleader(int Arr[]) throws Exception
	{
		int MaxR = Arr[Arr.length-1];
		System.out.print("  "+MaxR);

		for(int i=Arr.length-2;i>=0;i--)
		{
			if(Arr[i] > MaxR)
			{
				MaxR = Arr[i];
				System.out.print("  "+MaxR);
			}
		}
	}
}

class LeadderElement
{
	public static void main(String arg[])
	{
		try
		{
			int Brr[]={6,12,2,9,3,5,7};

			leadder lobj = new leadder();
			lobj.printleader(Brr);

			int crr[];
			lobj.printleader(crr);
		}
		catch(Exception eobj)
		{
			System.out.println("Exception Occured "+eobj);
			//eobj.printStackTrace;
		}
	}
	
}