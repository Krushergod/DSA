import java.util.*;
//program to pass reference
class passingbyref
{
    int data=50;
    void change(passingbyref op)
    {
        op.data=op.data+100;//changes will be in the instance variable
    }
    public static void main(String args[])
    {
        passingbyref op=new passingbyref();
        System.out.println("before change "+op.data);
        op.change(op);//passing object
        System.out.println("after change "+op.data);
    }
}
