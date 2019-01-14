import java.util.*;
import java.io.*;
import java.lang.*;


class MyString
{
	public int CountCap(String str)
	{
		int iCnt = 0;
		for(int i =0; i< str.length();i++)
				{
					if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
					{
						iCnt++;
					}
				}
		return iCnt;
	}
}

class StringX
{
	public static void main(String args[])
	{
		String str;
		int iRet = 0;
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String");
		str=sobj.nextLine();

		System.out.println("Entered String is : "+str);

		MyString ms = new MyString();

		iRet = ms.CountCap(str);
		System.out.println("Total Capital Character is : "+iRet);
	}
}