import java.io.*;
import java.util.*;

class Hello
{
	public Hello()
		{
			
			System.out.println("In Constructor");

		}
	public Hello(int i)
		{
			this();
			System.out.println("In Para");
		}
}
class HashCode
{
	public static void main(String args[])
	{
		Hello hobj = new Hello();
		Hello hobj1 = new Hello(11);

		System.out.println("Hash Code : "+hobj.hashCode());
		System.out.println("Hash Code : "+hobj1.hashCode());
	}
}