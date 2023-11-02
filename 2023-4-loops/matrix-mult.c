#include<stdio.h>
int main(void){
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    getchar();
    int A[100][100]={0};
    int B[100][100]={0};
    int C[100][100]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            int a=0;
            while(a<n){
                C[i][j]+=A[i][a]*B[a][j];
                a++;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}