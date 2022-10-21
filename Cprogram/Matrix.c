#include<stdio.h>
#define MAX 100
int main()
{
     int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX],I,J,K,M,N,R,S,CH;
     printf("ENTER THE SIZE OF A MATRIX (M X N) : \n");
     printf("ENTER VALUE FOR M:");
     scanf("%d",&M);
     printf("ENTER VALUE FOR N:");
     scanf("%d",&N);
     printf("\nENTER THE SIZE OF B MATRIX (R X S) : \n");
     printf("ENTER VALUE FOR R:");
     scanf("%d",&R);
     printf("ENTER VALUE FOR S:");
     scanf("%d",&S);
     printf("\nSELECT UR CHOICE (1.ADD 2.SUB 3.MULT) : ");
     scanf("%d",&CH);
     switch(CH)
     {
    case 1 :
    {
       if(M==R && N==S)
       {
        printf("ENTER %d X %d MATRIX A VALUES\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                scanf("%d",&A[I][J]);
            }
        }
        printf("\nMATRIX A VALUES ARE :\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                printf("%d\t",A[I][J]);
            }
            printf("\n");
        }
        printf("ENTER %d X %d MATRIX B VALUES\n",R,S);
        for(I=0;I<R;I++)
        {
            for(J=0;J<S;J++)
            {
                scanf("%d",&B[I][J]);
            }
        }
        printf("\nRESULT MATRIX B VALUES ARE :\n",R,S);
        for(I=0;I<R;I++)
        {
            for(J=0;J<S;J++)
            {
                printf("%d\t",B[I][J]);
            }
            printf("\n");
        }
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                C[I][J]=A[I][J]+B[I][J];
            }
        }
        printf("\nRESULT %d X %d MATRIX C VALUES ARE :\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                printf("%d\t",C[I][J]);
            }
            printf("\n");
        }
       }
       else
       {
        printf("\nERROR : CONDITION FOR ADDITION\n");
        printf("MATRICES IS NOT SATISFIED!\n");
       }
    break;
    }
    case 2 :
    {
       if(M==R && N==S)
       {
        printf("ENTER %d X %d MATRIX A VALUES\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                scanf("%d",&A[I][J]);
            }
        }
        printf("\nMATRIX A VALUES ARE :\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                printf("%d\t",A[I][J]);
            }
            printf("\n");
        }
        printf("ENTER %d X %d MATRIX B VALUES\n",R,S);
        for(I=0;I<R;I++)
        {
            for(J=0;J<S;J++)
            {
                scanf("%d",&B[I][J]);
            }
        }
        printf("\nMATRIX B VALUES ARE :\n",R,S);
        for(I=0;I<R;I++)
        {
            for(J=0;J<S;J++)
            {
                printf("%d\t",B[I][J]);
            }
            printf("\n");
        }
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                C[I][J]=A[I][J]-B[I][J];
            }
        }
        printf("\nRESULT %d X %d MATRIX C VALUES ARE :\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                printf("%d\t",C[I][J]);
            }
            printf("\n");
        }
       }
       else
       {
        printf("\nERROR : CONDITION FOR SUBTRACTION\n");
        printf(" MATRICES IS NOT SATISFIED!\n");
       }
    break;
    }
    case 3 :
    {
       if(N==R)
       {
        printf("ENTER %d X %d MATRIX A VALUES\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                scanf("%d",&A[I][J]);
            }
        }
        printf("\nMATRIX A VALUES ARE :\n",M,N);
        for(I=0;I<M;I++)
        {
            for(J=0;J<N;J++)
            {
                printf("%d\t",A[I][J]);
            }
            printf("\n");
        }
        printf("ENTER %d X %d MATRIX B VALUES\n",R,S);
        for(I=0;I<R;I++)
        {
            for(J=0;J<S;J++)
            {
                scanf("%d",&B[I][J]);
            }
        }
        printf("\nMATRIX B VALUES ARE :\n",R,S);
        for(I=0;I<R;I++)
        {
            for(J=0;J<S;J++)
            {
                printf("%d\t",B[I][J]);
            }
            printf("\n");
        }
        for(I=0;I<M;I++)
        {
            for(J=0;J<S;J++)
            {
                C[I][J]=0;
                for(K=0;K<R;K++)
                {
                    C[I][J]=C[I][J]+A[I][K]*B[K][J];
                }
            }
        }
        printf("\nRESULT %d X %d MATRIX C VALUES ARE :\n",M,S);
        for(I=0;I<M;I++)
        {
            for(J=0;J<S;J++)
            {
                printf("%d\t",C[I][J]);
            }
            printf("\n");
        }
       }
       else
       {
        printf("\nERROR : CONDITION FOR MULTIPLICATION\n");
        printf(" MATRICES IS NOT SATISFIED!\n");
       }
    break;
    }
    default:
    {
       printf("\nYOU ENTERED WRONG CHOICE !!!\n");
    }
     }
}
