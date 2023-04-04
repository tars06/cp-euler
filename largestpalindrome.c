#include<stdio.h>

int palindromeTest(int n){int b=0;
    while(n!=0){
        b = b*10 + n%10;
        n=n/10;
    }
    if(b==n) return 1;
    else return 0;
}

int noDigits(int n){int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}


int main(){ int max=-1;
    for (int i=10000;i<=999*999;i++){
        if (palindromeTest(i)==1){
            if (i>max) max=i;
        }
    }
    printf("%d",max);
    return 0;

}