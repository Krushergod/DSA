#include<stdio.h>
#include<ctype.h>
# define N 50

char stack[N];
int top=-1;

void push(char x){
    top++;
    stack[top]=x;
}

char pop(){
    char x;
    x=stack[top];
    top--;
    return x;
}

int isOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
        return 1;
    }
    else{
        return 0;
    }
}

int pri(char symbol){
    if(symbol=='^'){
        return 6;
    }
    else if(symbol=='*' || symbol=='/'){
        return 3;
    }
    else if(symbol=='+' || symbol=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

int prs(char symbol){
    if(symbol=='^'){
        return 5;
    }
    else if(symbol=='*' || symbol=='/'){
        return 4;
    }
    else if(symbol=='+' || symbol=='-'){
        return 2;
    }
    else{
        return 0;
    }
}

int main(){
    char infix[50],postfix[50],ch;
    int i=0,k=0;
    scanf("%s",infix);
    push('#');
    if((infix[1]=='+')&&(infix[2]=='+')){
        printf("Not Valid Infix Expression");
    }
    else{
    while((ch=infix[i])!='\0'){
        if(ch=='('){
            push(ch);
        }
        else if(isalnum(ch)){
            postfix[k++]=ch;
        }
        else if(ch==')'){
            while(stack[top]!='('){
                postfix[k++]=pop();
            }
           ch=pop();
        }
        else{
            while(pri(ch)<=prs(stack[top])){
                postfix[k++]=pop();
            }
            push(ch);
        }
        i++;
    }
    }
    while(stack[top]!='#'){
        postfix[k++]=pop();
    }
    postfix[k]='\0';
    printf("%s",postfix);
    
}
