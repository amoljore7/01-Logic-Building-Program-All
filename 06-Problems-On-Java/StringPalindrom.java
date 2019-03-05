import java.io.*;

class StringPalindrom
{
	public static void main(String args[]) throws IOException
	{
		

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter String : ");
		String str = br.readLine();
		
		String Temp = str;
		StringBuffer sb = new StringBuffer(str);
		sb.reverse();

		str = sb.toString();

		if(Temp.equalsIgnoreCase(str))
		{
			System.out.println(Temp+" is Palindrom ");
		}
		else
		{
				System.out.println(Temp+" is NOT Palindrom ");
		}

	}
}