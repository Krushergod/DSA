import java.util.*;
class point{
    //static method for takking two x1,x2,y1,y2 as input
    static void input(double x1,double x2,double y1,double y2){
        System.out.println("Distance between two points is "+distance(x1,x2,y1,y2));
    }
    //calculate the distance between two points
    static double distance(double x1,double x2,double y1,double y2){
        return Math.sqrt(Math.pow(x2-x1,2)+Math.pow(y2-y1,2));
    }
    //static method for midpoint of two points
    static void midpoint(double x1,double x2,double y1,double y2){
        System.out.println("Midpoint of two points is ("+(x1+x2)/2+","+(y1+y2)/2+")");
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double x1,x2,y1,y2;
        System.out.println("Enter the x1");
        x1=sc.nextDouble();
        System.out.println("Enter the x2");
        x2=sc.nextDouble();
        System.out.println("Enter the y1");
        y1=sc.nextDouble();
        System.out.println("Enter the y2");
        y2=sc.nextDouble();
        input(x1,x2,y1,y2);
        midpoint(x1,x2,y1,y2);

    }


}