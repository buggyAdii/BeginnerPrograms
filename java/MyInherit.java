class A
{
 public int a;
 A()
 {
  this.a=0;
 }
 public void meth_A()
 {
  System.out.println("I am class A");
 }
}
class B extends A
{
 public int b;
 B()
 {
  this.b=0;
 }
 public void meth_B()
 {
  System.out.println("I am class B");
 }
}
class C extends B
{
 public int c;
 C()
 {
  this.c=0;
 }
 public void meth_C()
 {
  System.out.println("I am class C");
 }
 
}
public class MyInherit {
 
 public static void main(String s[])
 {
  
  C ob= new C();
  int sum;
  ob.a=12;
  ob.b=14;
  ob.c=18;
  sum=ob.a+ob.b+ob.c;
  System.out.println("Sum="+sum);
   
  
 }
}