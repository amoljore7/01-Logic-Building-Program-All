import java.io.*;
import java.util.*;

class MyDigit
{
	public int CountDigit(int iNo)
		{
			int iCnt = 0;
			while(iNo != 0)
				{
					iCnt ++;
					iNo = iNo/10;
				}
			return iCnt;
		}
	public int SumDigit(int iNo)
		{
			int iDigit = 0;
			int iSum = 0;
			while(iNo != 0)
			{
				iDigit = iNo%10;
				iSum = iSum + iDigit;
				iNo = iNo /10;
			}
		return iSum;
		}
}


class Digit
{
	public static void main(String args[])
	{

		Scanner sobj = new Scanner(System.in);
		MyDigit md = new MyDigit();

		int iNum = 0;
		int iRet = 0;

		System.out.println("Enter Number");
		iNum = sobj.nextInt();

		iRet = md.CountDigit(iNum);
		System.out.println("Total Count of Digit is : "+iRet); 

		iRet = md.SumDigit(iNum);
		System.out.println("Sum of Digit is : "+iRet);
	}
}