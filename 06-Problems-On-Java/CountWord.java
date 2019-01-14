class myString
{
	public int wordcount(String str)
	{
		String Arr[] = str.split("\\S+");
		int iRet = Arr.length;
		return iRet;
	}
}
class CountWord
{
	public static void main(String arg[])
	{
		String str = "   Amol jore  Vaijapur";
		System.out.println(str);

		myString obj = new myString();
		int iRet = obj.wordcount(str);

		System.out.println(iRet);
	}
}