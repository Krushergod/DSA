import java.util.*;
class subclassconstructor{
    //program to demonstrate the multiple inheritance 
    //using person and student class
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
    static class teacher extends person{
        int salary;
        teacher(String name,int age,int salary){
            super(name,age);
            this.salary=salary;
        }
        void display(){
            System.out.println("Name: "+name);
            System.out.println("Age: "+age);
            System.out.println("Salary: "+salary);
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String name;
        int age,rollno,salary;
        System.out.println("Enter the name");
        name=sc.nextLine();
        System.out.println("Enter the age");
        age=sc.nextInt();
        System.out.println("Enter the rollno");
        rollno=sc.nextInt();
        student s=new student(name,age,rollno);
        s.display();
        System.out.println("Enter the name");
        name=sc.nextLine();
        System.out.println("Enter the age");
        age=sc.nextInt();
        System.out.println("Enter the salary");
        salary=sc.nextInt();
        teacher t=new teacher(name,age,salary);
        t.display();
    }
    

}