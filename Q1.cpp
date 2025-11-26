#include <stdio.h>
#define MAX 100

int stack[MAX], top=-1;

void push(int x){
    if(top==MAX-1) printf("Overflow\n");
    else stack[++top]=x;
}
int pop(){
    if(top==-1) return -1;
    return stack[top--];
}
int isEmpty(){
    return top==-1;
}
int isFull(){
    return top==MAX-1;
}
int peek(){
    if(top==-1) return -1;
    return stack[top];
}
void display(){
    for(int i=top;i>=0;i--) printf("%d ",stack[i]);
    printf("\n");
}

int main(){
    int ch,x;
    while(1){
        scanf("%d",&ch);
        if(ch==1){ scanf("%d",&x); push(x); }
        else if(ch==2){ printf("%d\n",pop()); }
        else if(ch==3){ printf("%d\n",isEmpty()); }
        else if(ch==4){ printf("%d\n",isFull()); }
        else if(ch==5){ display(); }
        else if(ch==6){ printf("%d\n",peek()); }
        else break;
    }
}
