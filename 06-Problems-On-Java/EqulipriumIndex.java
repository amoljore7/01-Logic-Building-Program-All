class Equliprium
{
	public int ChkEQ(int Arr[])
	{
		int sumLenft=0;
		int sumRight=0;
		int i=0,j=0,k=0;

		for(i=0;i<Arr.length;i++)
		{
			sumRight=0;
			sumLenft=0;

				for(j=0;j<i;j++)
				{
					sumLenft = sumLenft + Arr[j];
				}
				for(k=i+1;k<Arr.length;k++)
				{
					sumRight = sumRight + Arr[k];
				}
				if(sumLenft == sumRight)
				{
					break;
				}
		}
	if(i != Arr.length)
			{
				return -1;
			}
	else
		{
			return i;
		}
	}
}
class EqulipriumIndex
{
	public static void main(String arg[])
	{
		int Brr[]={1,2,3,5,7,15,-6,7};
		int iRet = 0;

		 Equliprium Eobj = new  Equliprium();
		iRet = Eobj.ChkEQ(Brr);

		if(iRet == -1)
		{
			System.out.println("Not  Equliprium Index");
		}
		else
		{
			System.out.println(" Equliprium Index is "+iRet);
		}
	}	
}














