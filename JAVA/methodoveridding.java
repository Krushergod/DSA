import java.util.*;
class methodoveridding{
    //one parent class and three sublcass 
    static class vehicle{
        String name;
        int speed;
        vehicle(String name,int speed){
            this.name=name;
            this.speed=speed;
        }

    }
    static class car extends vehicle{
        int gear;
        car(String name,int speed,int gear){
            super(name,speed);
            this.gear=gear;
        }
        void display(){
            System.out.println("Name: "+name);
            System.out.println("Speed: "+speed);
            System.out.println("Gear: "+gear);
        }
    }
    static class bike extends vehicle{
        int gear;
        bike(String name,int speed,int gear){
            super(name,speed);
            this.gear=gear;
        }
        void display(){
            System.out.println("Name: "+name);
            System.out.println("Speed: "+speed);
            System.out.println("Gear: "+gear);
        }
    }
    static class bus extends vehicle{
        int gear;
        bus(String name,int speed,int gear){
            super(name,speed);
            this.gear=gear;
        }
        void display(){
            System.out.println("Name: "+name);
            System.out.println("Speed: "+speed);
            System.out.println("Gear: "+gear);
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String name;
        int speed,gear;
        System.out.println("Enter the name");
        name=sc.nextLine();
        System.out.println("Enter the speed");
        speed=sc.nextInt();
        System.out.println("Enter the gear");
        gear=sc.nextInt();
        car c=new car(name,speed,gear);
        bike b=new bike(name,speed,gear);
        bus bu=new bus(name,speed,gear);
        c.display();
        b.display();
        bu.display();

    }

}