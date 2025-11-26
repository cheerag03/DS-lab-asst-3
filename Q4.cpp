#include <stdio.h>
#include <ctype.h>

char stack[1000];
int top=-1;

int prec(char c){
    if(c=='^') return 3;
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return 0;
}

int main(){
    char s[1000];
    scanf("%s",s);
    for(int i=0;s[i];i++){
        char c=s[i];
        if(isalnum(c)) printf("%c",c);
        else if(c=='(') stack[++top]=c;
        else if(c==')'){
            while(top!=-1 && stack[top]!='(') printf("%c",stack[top--]);
            top--;
        }
        else{
            while(top!=-1 && prec(stack[top])>=prec(c)) printf("%c",stack[top--]);
            stack[++top]=c;
        }
    }
    while(top!=-1) printf("%c",stack[top--]);
}
