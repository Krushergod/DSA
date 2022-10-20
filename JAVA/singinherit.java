import java.util.*;
class singinherit{
    //single inheritance using person and student class
    static class person{
        String name;
        int age;
        person(String name,int age){
            this.name=name;
            this.age=age;
        }

    }
    static class student extends person{
        int rollno;
        student(String name,int age,int rollno){
            super(name,age);
            this.rollno=rollno;
        }
        void display(){
            System.out.println("Name: "+name);
            System.out.println("Age: "+age);
            System.out.println("Rollno: "+rollno);
        }
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String name;
        int age,rollno;
        System.out.println("Enter the name");
        name=sc.nextLine();
        System.out.println("Enter the age");
        age=sc.nextInt();
        System.out.println("Enter the rollno");
        rollno=sc.nextInt();
        student s=new student(name,age,rollno);
        s.display();
    }
    


}