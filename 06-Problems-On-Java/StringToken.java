import java.io.*;
import java.util.*;

class StringToken
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter  Name, Age, Salary: ");
		String str = br.readLine();

		StringTokenizer st = new StringTokenizer(str," ");
			String s1=st.nextToken();
			String s2=st.nextToken();
			String s3=st.nextToken();

			s1=s1.trim();
			s2=s2.trim();
			s3=s3.trim();

			String name = s1;
			int age = Integer.parseInt(s2);
			float sal= Float.parseFloat(s3);

		System.out.print("Name: "+name+" ");
		System.out.print("Age: "+age+" ");
		System.out.print("Salary: "+sal+" ");
	}
}