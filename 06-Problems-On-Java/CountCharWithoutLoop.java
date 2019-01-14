class myString
{
	public int charCount(String str,String ch)
	{
		String temp = str.replaceAll(ch,"");
		int iRet;
		iRet = str.length() - temp.length();
		return iRet;
	}
}
class CountCharWithoutLoop
{
	public static void main(String arg[])
	{
		String str ="abcabab";
		String ch="a";
		myString obj = new myString();

		int iRet = obj.charCount(str,ch);
		System.out.println("Count is "+iRet);
	}
}