import java.util.Scanner;
public class SumNatural {
   public static void main(String args[]){
      int sum = 0;
      System.out.print("Enter the number value:: ");
      Scanner sumn = new Scanner(System.in);
      int num = sumn.nextInt();

      for (int i = 0; i<=num; i++){
         sum = sum +i;
      }
      System.out.println("Sum of numbers : "+sum);
   }
}
