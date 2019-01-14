import java.util.Scanner;

class Matrix
{
	public void Region(int Arr[][])
	{
		int i=0,j=0,iCnt=0,iSum=0;

		for(i=1;i<Arr.length;i++)
		{
			for(j=1;j<Arr[i].length;j++)
			{
				if(Arr[i][j] == 0)
				{
					iSum = Arr[i-1][j-1]+Arr[i-1][j]+Arr[i-1][j+1]+Arr[i][j-1]+Arr[i][j+1]+Arr[i+1][j-1]+Arr[i+1][j]+Arr[i+1][j+1];

					if(iSum == 8)
					{
						iCnt++;
					}
				iSum=0;
				}
			}
		}
		System.out.println("Region Where water is surrounded by full Land is : "+iCnt);
	}
	
}

class RegionLandWater
{
	public static void main(String args[])
	{
		Matrix mobj = new Matrix();

		Scanner sobj = new Scanner(System.in);

		System.out.print("Enter No Of Row's : ");
		int Row = sobj.nextInt();

		System.out.print("Enter No Of Coloum's : ");
		int Col = sobj.nextInt();

		int Brr[][] = new int[Row][Col];


		System.out.println("Enter All the Elements in Matrix : ");
		for (int i=0;i<Brr.length;i++)
		{
			for(int j=0;j<Brr[i].length;j++)
			{
				Brr[i][j] = sobj.nextInt();
			}
		}
		
		
		mobj.Region(Brr);		
	}
}