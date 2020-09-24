class A
{
 public int a;
 A()
 {
  this.a=0;
 }
 public void meth_1()
 {
  System.out.println("I am super class");
 }
}
class B extends A
{
 public int b;
 B()
 {
  this.b=0;
 }
 public void meth_2()
 {
  System.out.println("I am sub class");
 }
}
public class MyInherit1 {
 
 public static void main(String s[])
 {
  B sub=new B();      //object instance of class B
  A sup;              // object reference of class A
  A supa=new A();     // object instance of class A
  B sub_r;
  
  
  sup=sub; // super class reference can refer sub class object
  //sub_r=supa; //but sub class reference can not refer to super class object
  
  int c;
  sup.a=3;
  //sup.b=6;
  //c=sup.a+sup.b;
  //System.out.println("a+b=" + c);
  sup.meth_1();
  //sup.meth_2();*/
  
    
  
 }
 
 
}