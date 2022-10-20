import java.util.*;
//single inheritance, mutlilevel inheritance, hierarchical inheritance
class A//parent class 
{
    public void show()
    {
        System.out.println("A");
    }
}
class B extends A//child class 
{
    public void show()
    {
        System.out.println("B");
    }
}
class C extends B//child
{
    public void show()
    {
        System.out.println("C");
    }
}
class D extends A//child 
{
    public void show()
    {
        System.out.println("D");
    }
}
class inheritance9//main class 
{
    public static void main(String args[])
    {
        C c=new C();
        c.show();
        D d=new D();
        d.show();
    }
}
