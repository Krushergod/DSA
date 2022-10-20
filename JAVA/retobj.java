import java.util.*;
//program to return object
class retobj
{
    int data=50;
    retobj change()
    {
        retobj op=new retobj();
        op.data=data+100;//changes will be in the instance variable
        return op;
    }
    public static void main(String args[])
    {
        retobj op=new retobj();
        System.out.println("before change "+op.data);
        op=op.change();
        System.out.println("after change "+op.data);
    }
}
