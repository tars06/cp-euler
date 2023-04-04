#include<stdio.h>
#include<math.h>

int primeTest(int n){
    int i,flag=1;
    for (i=2;i<=sqrt(n);i++){
        if(n%i==0)flag=0;
    }
    if(flag==1) return 1;
    else return 0;
}

int main(){int sum=0,n;
    for(n=1;1;n++){
        if(primeTest(n)==1){if(n<2000000){
            sum += n;}
            else if(n>2000000) break;
        }
    }
    printf("%d",sum);
    return 0;
}