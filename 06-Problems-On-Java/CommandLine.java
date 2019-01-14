class CommandLine
{
	public static void main(String arg[])
	{
		System.out.println("Demo of Command Line Arguments");
		System.out.println("count of command line arguments : "+arg.length);
		for(int i=0;i<arg.length;i++)
		{
			System.out.println(arg[i]);
		}
	}	
}