import java.util.*;
//program for access specifiers
class A
{
    public int a=10;
    protected int b=20;
    int c=30;
    private int d=40;
    public void show()
    {
        System.out.println("A");
    }
}
class B extends A
{
    public void show()
    {
        System.out.println("B");
    }
}
class accessspecifiers
{
    public static void main(String args[])
    {
        B b=new B();
        System.out.println(b.a);
        System.out.println(b.b);
        System.out.println(b.c);
        System.out.println(b.d);//error
        
    }
}
