#include <stdio.h>
#include <ctype.h>

int stack[1000];
int top=-1;

int main(){
    char s[1000];
    scanf("%s",s);
    for(int i=0;s[i];i++){
        char c=s[i];
        if(isdigit(c)) stack[++top]=c-'0';
        else{
            int b=stack[top--];
            int a=stack[top--];
            if(c=='+') stack[++top]=a+b;
            else if(c=='-') stack[++top]=a-b;
            else if(c=='*') stack[++top]=a*b;
            else if(c=='/') stack[++top]=a/b;
        }
    }
    printf("%d",stack[top]);
}
