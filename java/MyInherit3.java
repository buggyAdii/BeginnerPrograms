class A
{
 public int a;
 A()
 {
  this.a=0;
  System.out.println("Constructor A");
 }
 public void meth_A()
 {
  System.out.println("I am class A");
 }
 public void calc()
 {
  System.out.println("Calc from calss A");
 }
 
}
class B extends A
{
 public int b;
 B()
 {
  this.b=0;
  System.out.println("Constructor B");
 }
 public void meth_B()
 {
  System.out.println("I am class B");
 }
 
 public void calc()
 {
  System.out.println("Calc from calss B");
 }
 
}
class C extends B
{
 public int c;
 C()
 {
  this.c=0;
  System.out.println("Constructor C");
 }
 public void meth_C()
 {
  System.out.println("I am class C");
 }
 public void calc()
 {
  System.out.println("Calc from calss C");
 }
 
}
class Adii extends C{
Adii()
{	
	this.c=0;
	System.out.println("Baingan is gay");
}
}
public class MyInherit3{
 
 public static void main(String s[])
 {
  
  Adii ob=new Adii();
  ob.calc();
  ob.meth_C();
 }
}