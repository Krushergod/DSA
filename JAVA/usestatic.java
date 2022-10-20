import java.util.*;
/*class usestatic{

    static void display(String name){
        System.out.println("Hello "+name);
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String name;
        System.out.println("Enter your name");
        name=sc.nextLine();
        display(name);
    }

}*/
class usestatic{
    public static void main(String[] args){
        print(1344);
        print(1,2,3,4,5,6,7,8,9,10);
    }
    static void print(int... a){
        System.out.println("Hello");
        for(int i=0;i<a.length;i++){
            System.out.println(a[i]);
        }

    }

}