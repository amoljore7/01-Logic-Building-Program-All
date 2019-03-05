import java.io.*;
import java.util.*;
class StrIndexOf
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter 1st String : ");
		String s1=sobj.nextLine();

		System.out.println("Enter 2nd String : ");
		String s2=sobj.nextLine();

		int iCnt=0;
		int iRet = 0;
		for(int i=1;i<=s1.length();i++)
		{
				iRet=s1.indexOf(s2,i);

				
				if(iRet != -1)
				{

					i=iRet;
					iCnt++;
				}
				else
				{
					break;
				}
		}

		System.out.println("Occurence is : "+iCnt);
	}	
}