package school.student; 
import school.education.Education;
import java.util.Scanner; 
public class Pupil extends Education {
    public void setData()
    {
		Scanner input = new Scanner(System.in);
		System.out.print("\n/-------------------------------------/\n\n\tEnter name: ");
		name = input.next();
		System.out.print("\tEnter Roll no: ");
		roll = input.nextInt();
		System.out.print("\tEnter Section: ");
		section = input.next().charAt(0);
	} 
} 