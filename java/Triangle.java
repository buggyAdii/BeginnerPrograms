import java.util.Scanner;
public class Triangle 
{
    int l, b,s1,s2,s3;
	double perimeter;
    Scanner s = new Scanner(System.in);
    
    void triangle()
    {
        System.out.print("Enter length of first side of triangle:");
        s1 = s.nextInt();
        System.out.print("Enter length of second side of triangle:");
        s2 = s.nextInt();
        System.out.print("Enter length of third side of triangle:");
        s3 = s.nextInt();
        perimeter = s1 + s2 + s3;
        System.out.println("Perimeter of triangle:"+perimeter);
    }
    public static void main(String[] args) 
    {
        Triangle obj = new Triangle();
        obj.triangle();
    }
}