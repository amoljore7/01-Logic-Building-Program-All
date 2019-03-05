import java.io.*;

class Fibonacci
{
	public static void main(String args[]) throws IOException 
	{
			BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
			System.out.println("How many Fibonaciie?: ");
			int No = Integer.parseInt(br.readLine());

			long f1=0,f2=1;
			System.out.println(f1);
			System.out.println(f2);

			long f=f1+f2;
			System.out.println(f);
			int iCnt = 3;
			while(iCnt < No)
			{
				f1=f2;
				f2=f;
				f=f1+f2;
				System.out.println(f);
				iCnt++;
			}
			
	}
}