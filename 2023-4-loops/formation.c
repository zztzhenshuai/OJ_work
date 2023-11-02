#include<stdio.h>
int main(void){
    int m,n;
    scanf("%d %d",&m,&n);
    getchar();
    char queue[200][200]={0};
    scanf("%s",queue[0]);
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                if(queue[i][j]=='0'&&queue[i][j+1]=='0'){
                    queue[i+1][j]='0';
                }else{
                    queue[i+1][j]='1';
                }
            }else if(j==n-1){
                queue[i+1][j]=queue[i][j];
            }else{
                if(queue[i][j-1]=='1'&&queue[i][j]=='1'&&queue[i][j+1]=='1'){
                    queue[i+1][j]='0';
                }else if(queue[i][j-1]=='1'&&queue[i][j]=='1'&&queue[i][j+1]=='0'){
                    queue[i+1][j]='1';
                }else if(queue[i][j-1]=='1'&&queue[i][j]=='0'&&queue[i][j+1]=='1'){
                    queue[i+1][j]='1';
                }else if(queue[i][j-1]=='1'&&queue[i][j]=='0'&&queue[i][j+1]=='0'){
                    queue[i+1][j]='0';
                }else if(queue[i][j-1]=='0'&&queue[i][j]=='1'&&queue[i][j+1]=='1'){
                    queue[i+1][j]='1';
                }else if(queue[i][j-1]=='0'&&queue[i][j]=='1'&&queue[i][j+1]=='0'){
                    queue[i+1][j]='1';
                }else if(queue[i][j-1]=='0'&&queue[i][j]=='0'&&queue[i][j+1]=='1'){
                    queue[i+1][j]='1';
                }else if(queue[i][j-1]=='0'&&queue[i][j]=='0'&&queue[i][j+1]=='0'){
                    queue[i+1][j]='0';
                }
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%c",queue[i][j]);
        }
        printf("\n");
    }
}