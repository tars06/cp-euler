#include<stdio.h>
#include<math.h>

int main(){int temp,sum=0;
    for(int i=1;i<=1000;i++)
    {temp=i;
        while (i!=0)
        {
            switch(i%10){
                case 0:sum+=4;break;
                case 1:sum+=3;break;
                case 2:sum+=3;break;
                case 3:sum+=5;break;
                case 4:sum+=4;break;
                case 5:sum+=4;break;
                case 6:sum+=3;break;
                case 7:sum+=5;break;
                case 8:sum+=6;break;
                case 9:sum+=4;break;
            }
            i=i/10;
        }
        i=temp;
        
    }
    printf("%d",sum);
    
    return 0;
}