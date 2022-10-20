//area of figures with method overloading
import java.util.Scanner;
class areaoffigures{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the shape of the figure");
        String shape = sc.nextLine();
        System.out.println("Enter the length of the figure");
        double length = sc.nextDouble();
        System.out.println("Enter the breadth of the figure");
        double breadth = sc.nextDouble();
        System.out.println("Enter the height of the figure");
        double height = sc.nextDouble();
        System.out.println("Enter the radius of the figure");
        double radius = sc.nextDouble();
        if(shape.equals("rectangle")){
            System.out.println("The area of the rectangle is: " + length*breadth);
        }
        else if(shape.equals("square")){
            System.out.println("The area of the square is: " + length*breadth);
        }
        else if(shape.equals("circle")){
            System.out.println("The area of the circle is: " + 3.14*radius*radius);
        }
        else if(shape.equals("triangle")){
            System.out.println("The area of the triangle is: " + 0.5*length*breadth*height);
        }
        else{
            System.out.println("Invalid shape");
        }
    }
}

