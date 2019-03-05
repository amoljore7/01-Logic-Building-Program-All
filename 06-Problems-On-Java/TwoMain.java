import java.io.*;

class Main2
{
	public static void main(String args[])
	{
		for(String str: args)
		{
			System.out.println(str);
		}
	}
}


class TwoMain
{
	public static void main(String args[])
	{
		String name[]={"A","B","C"};
		Main2.main(name);
	}
}