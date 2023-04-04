#include<stdio.h>
#include<math.h>
int main(){
    int i,max=-1,flag;
    for(i=1;i<=sqrt(600851475143);i++){
        for (int j=1;j<=i;j++){
            if(i%j==0)flag=0;
        }
        if (flag==1){
            if(600851475143%i==0){
                if(i>max) max=i;
            }
        }
    }
    printf("%d",max);
    return 0;
}