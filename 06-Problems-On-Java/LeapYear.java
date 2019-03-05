import java.io.*;

class LeapYear
{
	public static void main(String args[]) throws IOException 
	{
			BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
			System.out.println("Enter Year: ");
			int Year = Integer.parseInt(br.readLine());

			if(Year % 100 == 0  && Year % 400 == 0)
			{
				System.out.println("It is LeapYear");
			}
			else if(Year % 100 != 0  && Year % 4 == 0)
			{
				System.out.println("It is LeapYear");
			}
			else
			{
				System.out.println("It is NOT Leap Year");
			}
	}
}