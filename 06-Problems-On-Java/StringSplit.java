import java.io.*;

class StringSplitTrim
{
	public static void main(String args[])
	{
		String str = "       Hello, java       ";
		 String s[];
		 int len=str.length();
		 System.out.println("Length of str : "+len);
		str=str.trim();
		 len=str.length();
		 System.out.println("Length of str : "+len);
		 s=str.split(" ");
		 for(int i=0;i<s.length;i++)
		 {
		 	System.out.println(s[i]);
		 }
	}	
}