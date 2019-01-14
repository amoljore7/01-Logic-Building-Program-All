import java.lang.*;

class Max
{
	public int MaximumDiff(int Arr[]) throws Exception
	{
		int MaxD = Arr[1] - Arr[0];

		for(int i =0; i<Arr.length;i++)
		{
			for(int j=i+1;j<Arr.length;j++)
			{
				if((Arr[j] -  Arr[i]) > MaxD)
				{
					MaxD = Arr[j]-Arr[i];
				}
			}
		}
		return MaxD;
	}
}
class MaxDiff
{
	public static void main(String arg[])
	{
		try
		{
			int Brr[]={7,9,5,6,10,2};

			Max obj = new Max();
			int iRet = obj.MaximumDiff(Brr);
			System.out.println("Diff is "+iRet); 
		}
		catch(Exception eobj)
		{
			System.out.println(" Exception occured");
		}
	}
}