#include <stdio.h>
#include <stdlib.h>


int main(void){
    int n;
    scanf("%d",&n);
    getchar();
    char old_board[10][10]={0};
    char new_board[12][12]={0};
    for(int i=0;i<n;i++){
        scanf("%s",old_board[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            new_board[i+1][j+1]=old_board[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(new_board[i][j]!='*'){
                int count=0;
                int array[8][2]={{0,1},{0,-1},
                                 {1,1},{1,-1},
                                 {1,0},{-1,1},
                                 {-1,0},{-1,-1}};
                for(int k=0;k<8;k++){
                    int newi=i+array[k][0];
                    int newj=j+array[k][1];
                    if(new_board[newi][newj]=='*'){
                        count++;
                    }
                }
                switch(count){
                    case 0:{
                        new_board[i][j]='0';
                        break;
                    }
                    case 1:{
                        new_board[i][j]='1';
                        break;
                    }
                    case 2:{
                        new_board[i][j]='2';
                        break;
                    }
                    case 3:{
                        new_board[i][j]='3';
                        break;
                    }
                    case 4:{
                        new_board[i][j]='4';
                        break;
                    }
                    case 5:{
                        new_board[i][j]='5';
                        break;
                    }
                    case 6:{
                        new_board[i][j]='6';
                        break;
                    }
                    case 7:{
                        new_board[i][j]='7';
                        break;
                    }
                    case 8:{
                        new_board[i][j]='8';
                        break;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c",new_board[i][j]);
        }
        printf("\n");
    }


}