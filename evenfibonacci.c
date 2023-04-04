#include<stdio.h>

int fib(int n){
    if (n==1 || n==2) return n;
    return (fib(n-1)+fib(n-2));
}

int main(){int i=1,sum=0;
    while(1){
        if (fib(i)%2==0) sum += fib(i);
        i++;
        if(fib(i)>4000000) break;
    }
    printf("%d",sum);
    return 0;

}