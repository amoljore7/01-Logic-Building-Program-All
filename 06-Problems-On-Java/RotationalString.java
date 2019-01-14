class myString
{
	public boolean ChkRotation(String str1, String str2)
	{
		if(str1.length() == str2.length())
		{
			String str3 = str1+str2;
			boolean bRet = str3.contains(str2);
			return bRet;
			
		}
		else
		{
			return false;
		}
		
	}
}
class RotationalString
{
	public static void main(String arg[])
	{
		String str1 = "Apple";
		String str2 = "pleAp";

		myString obj = new myString();


		boolean bRet= obj.ChkRotation(str1,str2);
		if(bRet == true)
		{
			System.out.println("String is Rotational ");
		}
		else
		{
			System.out.println("String is NOT Rotational ");
		}
		
	}
}