import java.util.*;
class distancemod{
    //constructor for assigning values
    distancemod(double startpoint,double endpoint){
        start=startpoint;
        end=endpoint;
    }
    //method for calculating distance
    double distance(){
        return Math.abs(end-start);
    }
    //instance variables
    double start,end;
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double startpoint,endpoint;
        System.out.println("Enter the start point");
        startpoint=sc.nextDouble();
        System.out.println("Enter the end point");
        endpoint=sc.nextDouble();
        distancemod obj=new distancemod(startpoint,endpoint);
        System.out.println("Distance between two points is "+obj.distance());
    }
     

}