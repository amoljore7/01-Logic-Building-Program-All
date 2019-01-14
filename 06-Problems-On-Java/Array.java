import java.util.*;

class MyArray
{
	public int ArraySum(int iBrr[])
	{
		int i = 0;
		int iSum = 0;
		for(i=0;i<iBrr.length;i++)
		{
			iSum = iSum + iBrr[i];
		}
		return iSum;
	}

	public int Maximum(int iBrr[])
	{
		int iMax = iBrr[0];
		int i =0;
		for(i=0;i<iBrr.length;i++)
		{
			if(iBrr[i] > iMax)
			{
				iMax = iBrr[i];
			}
		}
		return iMax;
	}
	public int Minimum(int iBrr[])
	{
		int iMin = iBrr[0];
		int i = 0;
		for(i=0;i<iBrr.length;i++)
		{
			if(iBrr[i] < iMin)
			{
				iMin = iBrr[i];
			}
		}
		return iMin;
	}
}



class Array
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter SIZE of Elements");

		int iSize = sobj.nextInt();
		int iArr[] = new int[iSize];
		int iCnt = 0;
		int iRet = 0;

		System.out.println("Enter Element in Array : ");
		for(iCnt = 0;iCnt < iArr.length;iCnt++)
		{
			iArr[iCnt] = sobj.nextInt();
		}

		System.out.println("Elemets Are : ");
		for(iCnt = 0;iCnt<iArr.length;iCnt++)
			{
				System.out.println(iArr[iCnt]);
			}

		MyArray mobj = new MyArray();

		iRet = mobj.ArraySum(iArr);
		System.out.println("Sum of Array Element is :"+ iRet);

		iRet = mobj.Maximum(iArr);
		System.out.println("Maximum Element is :"+ iRet);

		iRet = mobj.Minimum(iArr);
		System.out.println("Minimum Element is :"+ iRet);
	}
}