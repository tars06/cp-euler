#include<stdio.h>
#include<math.h>

int count=0;

int chainCount(int n){
    count++;
    if(n%2==0) return chainCount(n/2);
    else if (n!=1 && n%2!=0) return chainCount(3*n+1)
    else return count+1;
}



int main(){int a,b,max=-1;
    for(int i=1;i<=1000000;i++){
        if(chainCount(i)>max){
            max=chainCount(i);
            a=i;
        }
    }
    printf("%d",i);
    return 0;
}
