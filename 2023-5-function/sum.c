#include <stdio.h>

int main() {
    int n,t;
    int sum=0;
    scanf("%d %d",&n,&t);
    for(int i=0;i<n;i++){
        int pro=t;
        for(int j=0;j<i;j++){
            pro=pro*10+t;
        }
        sum+=pro;
    }
    printf("%d",sum);

}
