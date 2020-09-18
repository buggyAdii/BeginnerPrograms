import java.util.Scanner;
public class Compare {

    public static void main(String[] args) {

		Scanner number = new Scanner(System.in);
		System.out.println("Enter the number's: ");
		int n1 = number.nextInt();
		int n2 = number.nextInt();
		int n3 = number.nextInt();

        if( n1 >= n2 && n1 >= n3)
            System.out.println(n1 + " is the largest number.");

        else if (n2 >= n1 && n2 >= n3)
            System.out.println(n2 + " is the largest number.");

        else
            System.out.println(n3 + " is the largest number.");
    }
}
