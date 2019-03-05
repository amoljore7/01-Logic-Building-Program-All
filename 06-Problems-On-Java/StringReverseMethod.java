import java.io.*;

class StringReverseMethod
{
	public static void main(String args[]) throws IOException
	{
		StringBuffer sb = new StringBuffer();

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter String : ");
		String str = br.readLine();
		
		sb.append(str);

		System.out.println("Before Reverse : "+str);
		System.out.println("After Reverse : "+sb.reverse());
	}
}