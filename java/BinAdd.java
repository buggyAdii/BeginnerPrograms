public class BinAdd {
   public static void main(String[] args)
   {	 int b1, b2;
	b1 = 11111; b2 = 101010 ; 
	int carry = 0;
	int i=0;
	int[] sum = new int[10];

	while (b1 != 0 || b2 != 0) 
	{
		sum[i++] = (int)((b1 % 10 + b2 % 10 + carry) % 2);
		carry = (int)((b1 % 10 + b2 % 10 + carry) / 2);
		b1 = b1 / 10;
		b2 = b2 / 10;
	}
	if (carry != 0) {sum[i++] = carry;}
	--i;
	System.out.print("Output: ");
	while (i >= 0) {
		System.out.print(sum[i--]);
	}
	System.out.print("\n");  
   }
}
