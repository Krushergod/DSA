import java.util.*;
class distanceclass{
    //calculate distance between two points
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double startpoint,endpoint,distance;
        System.out.println("Enter the start point");
        startpoint=sc.nextDouble();
        System.out.println("Enter the end point");
        endpoint=sc.nextDouble();
        distance=endpoint-startpoint;
        System.out.println("Distance between two points is "+distance);

    }
    


}
