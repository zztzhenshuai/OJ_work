#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsPrime(int x){
    bool flag=true;
    for (int i = 2; i <= sqrt(x + 0.5); i++) {
        if (x % i == 0) {
            flag = false;
        }
    }
    return flag;
}
int Swap(int x){
    int arr[4]={0};
    int i=0;
    if(x>=10){
        while(x!=0){
            arr[i]=x%10;
            i++;
            x=x/10;
        }
        for(int j=0;j<i;j++){
            x+=arr[j]*pow(10,i-j-1);
        }
        return x;
    }else{
        return x;
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=2;i<n+1;i++){
        int j= Swap(i);
        if(IsPrime(i)&&IsPrime(j)){
                num++;
        }
    }
    if(n<2){
        num=0;
    }
    printf("%d",num);
}