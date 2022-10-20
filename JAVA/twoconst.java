import java.util.*;
//implement two  constructors in class and call with this keyword
class A
{
    int a;
    int b;
    A()
    {
        this(10,20);
        System.out.println("A");
    }
    A(int a,int b)
    {
        this.a=a;
        this.b=b;
        System.out.println("B");
    }
}
class twoconst
{
    public static void main(String args[])
    {
        A a=new A();
        System.out.println(a.a);
        System.out.println(a.b);
    }
}
