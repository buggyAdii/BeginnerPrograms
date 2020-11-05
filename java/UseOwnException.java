public class UseOwnException { 
public static void main(String[] args) {
int age=120;
try {
if(age>100 || age<0)
{
throw new MyOwnException();
}
else
{
System.out.println("Your age is "+age);
}
}
catch(MyOwnException e)
{
System.out.println(e);
}
}
}
