class StaticMember
{
   static int count=1;
   public void increment()
   {
       count++;
   }
   public static void main(String args[])
   {
       StaticMember obj1=new StaticMember();
       StaticMember obj2=new StaticMember();
       obj1.increment();
       obj2.increment();
       System.out.println("Obj1: count is="+obj1.count);
       System.out.println("Obj2: count is="+obj2.count);
   }
}