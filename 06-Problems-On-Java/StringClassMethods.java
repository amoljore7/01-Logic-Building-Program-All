import java.io.*;

class StringClassMethods
{
	public static void main(String args[])
	{
		String s1 = "A    Book is java";
		String s2 = new String("I like it");
		char arr[] = {'D','r','e','a','m','t','e','c','h',' ','p','r','e','s','s'};

		String s3 = new String(arr);

		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);


		System.out.println("Length of s1: "+s1.length());
		System.out.println("Length of s1: "+arr.length);

		System.out.println("S1 And S2 joinde :"+s1.concat(s2));
		System.out.println(s1+" from "+s3);

		boolean x=s1.startsWith("A");
		if(x)
		{
			System.out.println("S1 Starts with \'A\'");
		}
		else
		{
			System.out.println("S1 NOT with \'A\'");
		}

		String p = s2.substring(0,7);
		String q = s3.substring(0,9);


		System.out.println(p+q);

		System.out.println("Upper s1 ="+s1.toUpperCase());
		System.out.println("Lower s2 ="+s2.toLowerCase());
	}
}

/*

*/