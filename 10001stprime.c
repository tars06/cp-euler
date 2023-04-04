#include<stdio.h>
#include<math.h>
int primeTest(int n){int flag;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) flag=0;
    }
    if (flag==1)
    {
        return 1;
    }
    else return 0;    
}


int main(){
    int i,n,temp,count=0;
    for(n=1;count!=10001;n++){
        if(primeTest(n)==1){
            count++;
            if(count==10001){
                temp=n;
            }
        }      
    }
    printf("%d",temp);


    return 0;
}