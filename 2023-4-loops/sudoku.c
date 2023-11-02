#include <stdio.h>
int main(void){
    int is_true1=1;
    int is_true2=1;
    int is_true3=1;
    int array[9][9]={0};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<9;i++){
        int sum=0;
        int pro=1;
        for(int j=0;j<9;j++){
            sum+=array[i][j];
            pro*=array[i][j];
        }
        if(sum==45&&pro==362880){
            is_true1=1;
        }else{
            is_true1=0;
            break;
        }
    }
    for(int i=0;i<9;i++){
        int sum=0;
        int pro=1;
        for(int j=0;j<9;j++){
            sum+=array[j][i];
            pro*=array[j][i];
        }
        if(sum==45&&pro==362880){
            is_true2=1;
        }else{
            is_true2=0;
            break;
        }
    }
    for(int i=0;i<=6;i+=3){
        int sum=0;
        int pro=1;
        for(int j=0;j<=6;j+=3){
            int array1[9]={0};
            for(int a=0;a<3;a++){
                array1[a]=array[i][a];
            }
            for(int a=3;a<6;a++){
                array1[a]=array[i+1][a-3];
            }
            for(int a=6;a<9;a++){
                array1[a]=array[i+2][a-6];
            }
            for(int a=0;a<9;a++){
                for(int j=a+1;j<9;j++){
                    if(array1[a]==array1[j]){
                        is_true3=0;
                        break;
                    }
                }
                if(is_true3==0){
                    break;
                }
            }
            if(is_true3==0){
                break;
            }
            sum=array[i][j]+array[i][j+1]+array[i][j+2]+
                    array[i+1][j]+array[i+1][j+1]+array[i+1][j+2]+
                    array[i+2][j]+array[i+2][j+1]+array[i+2][j+2];
            pro=array[i][j]*array[i][j+1]*array[i][j+2]*
                array[i+1][j]*array[i+1][j+1]*array[i+1][j+2]*
                array[i+2][j]*array[i+2][j+1]*array[i+2][j+2];
            if(sum==45&&pro==362880){
                is_true3=1;
            }else{
                is_true3=0;
                break;
            }
        }
        if(is_true3==0){
            break;
        }
    }
    if(is_true1&&is_true2&&is_true3){
        printf("YES");
    }else{
        printf("NO");
    }
}
