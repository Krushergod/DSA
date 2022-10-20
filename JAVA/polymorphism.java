import java.util.*;
//runtime polymorphism with multilevel inheritance 
class Animal
{
    void eat()
    {
        System.out.println("eating...");
    }
}
class Dog extends Animal
{
    void eat()
    {
        System.out.println("eating bread...");
    }
}
class BabyDog extends Dog
{
    void eat()
    {
        System.out.println("drinking milk...");
    }
}
class polymorphism
{
    public static void main(String args[])
    {
        Animal a1,a2,a3;
        //upcasting
        a1=new Animal();
        a2=new Dog();
        a3=new BabyDog();
        a1.eat();
        a2.eat();
        a3.eat();
    }
}
