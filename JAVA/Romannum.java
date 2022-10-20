//convert decimal to roman 
import java.util.*;
public class Romannum{
    //method to convert decimal to roman
    public static String convert(int num){
        String[] roman = {"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
        return roman[num-1];
    }   
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number to be converted");
        int num = sc.nextInt();
        System.out.println("The roman numeral is: " + convert(num));
    }
    



}


