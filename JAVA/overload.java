import java.util.*;
class overload{
    //overloaded constructor for distance between two points
    overload(double startpoint,double endpoint){
        start=startpoint;
        end=endpoint;
    }
    //overloaded constructor for distance between two points
    overload(double startpoint,double endpoint,double startpoint1,double endpoint1){
        start=startpoint;
        end=endpoint;
        start1=startpoint1;
        end1=endpoint1;
    }
    //method for calculating distance
    double distance(){
        return Math.abs(end-start);
    }
    //method for calculating distance
    double distance1(){
        return Math.abs(end1-start1);
    }
    //instance variables
    double start,end,start1,end1;

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double startpoint,endpoint,startpoint1,endpoint1;
        System.out.println("Enter the start point");
        startpoint=sc.nextDouble();
        System.out.println("Enter the end point");
        endpoint=sc.nextDouble();
        overload obj=new overload(startpoint,endpoint);
        System.out.println("Distance between two points is "+obj.distance());
        System.out.println("Enter the start point");
        startpoint1=sc.nextDouble();
        System.out.println("Enter the end point");
        endpoint1=sc.nextDouble();
        overload obj1=new overload(startpoint1,endpoint1,startpoint,endpoint);
        System.out.println("Distance between two points is "+obj1.distance1());
    }
}