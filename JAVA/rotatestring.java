import java.util.*;
class rotatestring{
//check if string s1 is reversed of s2
    static boolean check(String s1,String s2){//s1=abc,s2=cba
        if(s1.length()!=s2.length())
            return false;
        int n=s1.length();
        for(int i=0;i<n;i++){
            if(s1.charAt(i)!=s2.charAt(n-i-1))
                return false;
        }
        return true;
    }
    public static void main(String[] args){//main method
        Scanner sc=new Scanner(System.in);
        String s1,s2;
        System.out.println("Enter the string");
        s1=sc.nextLine();
        System.out.println("Enter the string");
        s2=sc.nextLine();
        if(check(s1,s2))
            System.out.println("Yes");
        else
            System.out.println("No");
    }

}