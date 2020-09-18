import java.util.*;
class Student{
	String name;
	int roll;
}
class Creation { 
    public static void main(String[] args)  { 
    
	Student MyStudent = new Student(); 
	MyStudent.name="John";
	MyStudent.roll=2;
	
	System.out.println("Name:"+MyStudent.name);
	System.out.println("Roll:"+MyStudent.roll);
}
}