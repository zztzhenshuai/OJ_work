#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    scanf("%d",&n);
    getchar();
    int permutation[2000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&permutation[i]);
    }
    int count = 0;
    for (int i=n-1;i>=0;i--){
        if(permutation[i]<permutation[i-1]){
            count++;
            continue;
        }else{
            for(int j=n-1;j>i-1;j--){
                if(permutation[j]>permutation[i-1]){
                    int temp=permutation[j];
                    permutation[j]=permutation[i-1];
                    permutation[i-1]=temp;
                    break;
                }
            }
        }break;
    }
    for(int i=0;i<n-count-1;i++){
        printf("%d ",permutation[i]);
    }
    for(int i=n-1;i>=n-count-1;i--){
        printf("%d ",permutation[i]);
    }
}