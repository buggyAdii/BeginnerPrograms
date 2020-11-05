import java.util.Scanner;
public class CustomException {
  public static void main(String[] args) {
    Scanner details = new Scanner(System.in);

    System.out.print("Enter Name: ");
    String name = details.nextLine();
    try {
      name=name.toLowerCase();
      int l=name.length();
      int c=0;
      for(int i=0;i<l;i++) {
        char ch=name.charAt(i);
        if(ch>=97 && ch<=122 || ch>=65 && ch<=90 || ch == 32) {
          c++;
        }
        else {
          c=0;
          break;
        }
      }
      if(c!=0) {
      }
      else {
        throw new WrongFormatNameException();
      }
    }
    catch(WrongFormatNameException e) {
      System.out.println(e);
    }

    System.out.print("Enter Your Age: ");
    int age = details.nextInt();
    try {
      if(age>100 || age<0){
        throw new WrongAge();
      }

    }
    catch(WrongAge e) {
      System.out.println(e);
    }
    catch(Exception e){
      System.out.println(e);
    }

    System.out.print("Enter Your Section:");
    char section = details.next().charAt(0);
    try {
      if(section != 'A' && section != 'a' && section != 'B' && section != 'b' && section != 'C' && section != 'c') {
        throw new WrongSection();
      }
    }
      catch(WrongSection e) {
      System.out.println(e);
    }
    System.out.println("\n-------------------------\nName: "+name+"\nAge: "+age+"\nSection: "+section);
  }
}
