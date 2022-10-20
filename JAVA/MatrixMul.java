import java.util.*;
//Program for matrix multiplication

public class MatrixMul{
    public static void main(String[] args){
//Matrix A
       // int[][] A = {{1,2,3},{4,5,6},{7,8,9}};
       //take user input 
         Scanner sc = new Scanner(System.in);

            System.out.println("Enter the number of rows in matrix A");
            int m = sc.nextInt();   
            System.out.println("Enter the number of columns in matrix A");
            int n = sc.nextInt();
            int[][] A = new int[m][n];
            System.out.println("Enter the elements of matrix A");
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    A[i][j] = sc.nextInt();
                }
            }

//Matrix B
       // int[][] B = {{1,2,3},{4,5,6},{7,8,9}};
       //take user input 
         System.out.println("Enter the number of rows in matrix B");
            int p = sc.nextInt();   
            System.out.println("Enter the number of columns in matrix B");
            int q = sc.nextInt();
            int[][] B = new int[p][q];
            System.out.println("Enter the elements of matrix B");
            for(int i=0;i<p;i++){
                for(int j=0;j<q;j++){
                    B[i][j] = sc.nextInt();
                }
            }
            
//Matrix C
        int[][] C = new int[3][3];

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        System.out.println("Matrix C"   + Arrays.deepToString(C));

    }
}