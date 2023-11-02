#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int huanfang[10][10]={0};
    int a=2;
    huanfang[0][n/2]=1;
    int row=0;
    int col=n/2;
    for(a=2;a<n*n+1;a++){
        if(row-1>=0&&col+1<n){
            if(huanfang[row-1][col+1]==0){
                row-=1;
                col+=1;
                huanfang[row][col]=a;
            }else{
                row+=1;
                huanfang[row][col]=a;
            }
        }else if(row<=1&&col<n-1){
            if(huanfang[n-1][col+1]==0){
                row=n-1;
                col+=1;
                huanfang[row][col]=a;
            }else{
                row+=1;
                huanfang[row][col]=a;
            }
        }else if(row>=1&&col>=n-1){
            if(huanfang[row-1][0]==0){
                row-=1;
                col=0;
                huanfang[row][col]=a;
            }else{
                row+=1;
                huanfang[row][col]=a;
            }
        }else{
            if(huanfang[n-1][0]==0){
                row=n-1;
                col=0;
                huanfang[row][col]=a;
            }else{
                row+=1;
                huanfang[row][col]=a;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",huanfang[i][j]);
        }
        printf("\n");
    }

}