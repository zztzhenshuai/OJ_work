#include <stdio.h>
#include <math.h>

int IsTrue(int x,int i){
    int a;
    int b=1;
    while(x!=0){
        a=x%10;
        x/=10;
        if(a>=i){
            b=0;
            break;
        }
    }
    return b;
}
int Change(int x,int i){
    int sum=0;
    int a=0;
    while(x!=0){
        sum+=(x%10)*pow(i,a);
        a++;
        x/=10;
    }
    return sum;
}
int main(void){
    int p,q,r;
    int a=0;
    scanf("%d %d %d",&p,&q,&r);
    for(int i=2;i<41;i++){
        if(i<10){
            if(IsTrue(p,i)&& IsTrue(q,i)&& IsTrue(r,i)){
                if(Change(p,i)*Change(q,i)==Change(r,i)){
                    printf("%d",i);
                    a=1;
                    break;
                }
            }else{
                continue;
            }
        }else{
            if(Change(p,i)*Change(q,i)==Change(r,i)){
                printf("%d",i);
                a=1;
                break;
            }
        }
    }
    if(a==0){
        printf("0");
    }
}