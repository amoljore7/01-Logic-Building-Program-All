import java.io.*;
import java.util.*;


class Maths
{
	public int Add(int iNum1,int iNum2)
		{
			int Ans = 0;
			Ans = iNum1 + iNum2;
			return Ans;
		}
}

class Number
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		Maths mobj = new Maths();

		int iNo1 = 0;
		int iNo2 = 0;
		int iRet = 0;

		System.out.println("Enter First Number");
		iNo1 = sobj.nextInt();

		System.out.println("Enter Second Number");
		iNo2 = sobj.nextInt();

		iRet = mobj.Add(iNo1,iNo2);

		System.out.println("Addition of Number Is : "+ iRet);
	}
}

