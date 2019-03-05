import java.io.*;

class Accept
{
	public static void main(String args[]) throws IOException
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(iobj);

		System.out.println("Enter A Character : ");
		char ch =(char)br.read();

		System.out.println("you Entered: "+ch);
	}
}