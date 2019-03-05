import java.io.*;

class AcceptIntteger
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		System.out.println("Enter No :");
		int No = Integer.parseInt(br.readLine());

		System.out.println("you Entered No is :"+No);
	}
}