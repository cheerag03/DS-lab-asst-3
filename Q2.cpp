#include <stdio.h>
#include <string.h>
#define MAX 1000

char stack[MAX];
int top=-1;

int main(){
    char s[MAX];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) stack[++top]=s[i];
    while(top!=-1) printf("%c",stack[top--]);
}
