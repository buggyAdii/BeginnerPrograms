import java.util.Scanner;
class Average
{
public int average(int x, int y, int z)
 {
 return (x + y + z) / 3;
 }
} 

class AvgThree{
public static void main(String[] args){
 Scanner in = new Scanner(System.in);
 Average avg = new Average();
 System.out.print("Input the first number: ");
 int x = in.nextInt();
 System.out.print("Input the second number: "); 
 int y = in.nextInt();
 System.out.print("Input the third number: ");
 int z = in.nextInt();
 System.out.print("The average value is " + avg.average(x, y, z)+"\n" );
 }
}