#include <stdio.h>
int main(void){
    int n,m,x0,y0;
    int array[50][50]={0};
    int is_accessible=1;
    scanf("%d %d %d %d",&n,&m,&x0,&y0);
    getchar();
    char map[50][50]={0};
    for(int i=0;i<n;i++){
        scanf("%s",map[i]);
    }
    int judge[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    int count1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(map[i][j]=='#'){
                count1++;
            }
        }
    }
    printf("%d\n",count1);
    printf("%d %d\n",x0,y0);
    array[x0-1][y0-1]=1;
    while(is_accessible){
        int count=0;
        for(int k=0;k<4;k++){
            int i=x0-1+judge[k][0];
            int j=y0-1+judge[k][1];
            if(i>=0&&i<n&&j>=0&&j<m){
                if(map[i][j]=='#'){
                    if(array[i][j]==0){
                        printf("%d %d\n",i+1,j+1);
                        x0=i+1;
                        y0=j+1;
                        array[i][j]=1;
                        count++;
                        break;
                    }
                }
            }else{
                continue;
            }
        }
        if(count==0){
            is_accessible=0;
        }
    }
}