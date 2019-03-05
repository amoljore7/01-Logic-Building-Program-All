import java.io.*;

class StringBufferClassMethods
{
	public static void main(String args[]) throws IOException
	{
		StringBuffer sb = new StringBuffer();

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter FirstName : ");
		String first = br.readLine();

		System.out.print("Enter MidName : ");
		String mid = br.readLine();

		System.out.print("Enter SurName : ");
		String sur = br.readLine();

		sb.append(first);
		sb.append(sur);

		System.out.println("Name : "+sb);
		int n=first.length();
		sb.insert(n,mid);
		System.out.println("Full Name : "+sb);
		System.out.println("Reverse : "+sb.reverse());
	}
}