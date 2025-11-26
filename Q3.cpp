#include <stdio.h>
#include <string.h>

char stack[1000];
int top=-1;

int main(){
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='[') stack[++top]=c;
        else{
            if(top==-1) { printf("NO"); return 0; }
            char t=stack[top--];
            if((c==')'&&t!='(')||(c=='}'&&t!='{')||(c==']'&&t!='[')){ printf("NO"); return 0; }
        }
    }
    printf(top==-1?"YES":"NO");
}
