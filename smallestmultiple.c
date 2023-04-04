#include<stdio.h>
int main(){
    int i,n,flag,temp;
    for(n=1;1;n++){flag=1;
        for (i=1;i<=20;i++){
            if(n%i!=0){flag=0;break;}
        }
        if(flag==0) continue;
        if(flag==1) {temp=n;break;}
    }
    printf("%d",temp);
    return 0;
}