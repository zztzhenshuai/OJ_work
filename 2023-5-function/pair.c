#include<stdio.h>
int main(void){
    int n,m,t;
    int a[1000]={0};
    int b[1000]={0};
    scanf("%d %d %d",&n,&m,&t);
    getchar();
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int min=2000000000;
    for(int i=0;i<m;i++){
        int low=0;
        int high=n-1;
        int mid=(n-1)/2;
        while(low<=high){
            if(t-b[i]>=a[mid]){
                min=(min>(t-b[i]-a[mid]))?(t-b[i]-a[mid]):min;
                low=mid+1;
                mid=(low+high)/2;
            }else{
                high=mid-1;
                mid=(low+high)/2;
            }
        }
    }
    if(min==2000000000){
        min=-1;
    }
    printf("%d",min);
}