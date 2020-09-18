import java.util.Scanner;
class SquareRoot { 

    static boolean checkSquare(double x){ 
	double sqr = Math.sqrt(x); 
	return ((sqr - Math.floor(sqr)) == 0); 
    } 
 
    public static void main(String[] args)  
{ 
	System.out.print("Enter any number:");
	Scanner scanner = new Scanner(System.in);
	double num = scanner.nextDouble(); 

	if (checkSquare(num))
		System.out.print(num+ " is a perfect square number"); 
	else
		System.out.print(num+ " is not a perfect square number"); 
    } 
}
