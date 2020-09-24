public class MultiMethod
{
 public static int add(int a, int b)
 {
 return a + b;
 }
  public static double add(double a, double b)
 {
 return a + b;
 }
  public static double add(double a, double b, double c)
 {
 return a + b + c;
 }
  public static int add(int a, int b, int c)
 {
 return a + b + c;
 }
  public static void main(String args[])
 {
 System.out.println(add(2, 3));
 System.out.println(add(2.0, 3.0));
 System.out.println(add(2.0, 3.0, 5.0));
 System.out.println(add(2, 3, 5));
 }
} 