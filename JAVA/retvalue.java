import java.util.*;
//program to return value
class retvalue
{
    int data=50;
    int change()
    {
        return data+100;//changes will be in the local variable only
    }
    public static void main(String args[])
    {
        retvalue op=new retvalue();
        System.out.println("before change "+op.data);
        op.change();
        System.out.println("after change "+op.data);
    }
}
