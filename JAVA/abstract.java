import java.util.*;
//program to use abstract class

abstract class Shape
{
    int a,b;
    abstract void printArea();
}
class Rectangle extends Shape
{
    void printArea()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length and breadth of rectangle");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("Area of rectangle is "+(a*b));
    }
}
class Triangle extends Shape
{
    void printArea()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter base and height of triangle");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("Area of triangle is "+(0.5*a*b));
    }
}
class Circle extends Shape
{
    void printArea()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter radius of circle");
        a=sc.nextInt();
        System.out.println("Area of circle is "+(3.14*a*a));
    }
}
class abstract
{
    public static void main(String args[])
    {
        Rectangle r=new Rectangle();
        Triangle t=new Triangle();
        Circle c=new Circle();
        r.printArea();
        t.printArea();
        c.printArea();
    }
}
