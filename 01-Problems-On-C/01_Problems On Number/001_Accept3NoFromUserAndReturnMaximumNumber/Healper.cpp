//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		
//		Function Name	: Max
//		Description		: Accept3No And Display Maximum
//		Input			: int[IN], int[IN], int[IN]
//		Output			: int
//		Author Name		: Amol Balasaheb Jore
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Max(int iNo1, int iNo2, int iNo3)
{
	if((iNo1>=iNo2)&&(iNo1>=iNo3))
		{
		return iNo1;
		}
	else if((iNo2>=iNo1)&&(iNo2>=iNo3))
		{
		return iNo2;
		}
	else
		{
		return iNo3;
		}
}