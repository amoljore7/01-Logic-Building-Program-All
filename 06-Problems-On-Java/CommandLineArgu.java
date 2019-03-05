import java.io.*;

class CommandLineArgu
{
	public static void main(String args[])
	{
		int N = args.length;
		System.out.println("No. of Args ="+N);

		System.out.println("The Args Are: ");
		for(int i=0;i<=N;i++)
		{
			System.out.println(args[i]);
		}
	}
}