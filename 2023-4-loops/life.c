#include<stdio.h>
#include <string.h>

int main(void){
    int round;
    scanf("%d",&round);
    getchar();
    char life[1000]={0};
    scanf("%s",life);
    int len=strlen(life);
    char life1[1000]={0};
    for(int i=0;i<len;i++){
        life1[i]=life[i];
    }
    for(int j=0;j<round;j++){
        for(int i=0;i<len;i++){
            int a=0;
            int b=0;
            int empty=0;
            for(int k=i-3;k<=i+3;k++){
                if(k>=0&&k!=i&&k<len){
                    if(life[k]=='A'){
                        a++;
                    }else if(life[k]=='B'){
                        b++;
                    }else{
                        empty++;
                    }
                }
            }
            if(((life[i]=='.'&&a<5&&a>1&&b==0)||(life[i]=='.'&&b<5&&b>1&&a==0))&&(a+b!=0)){
                if(a==0){
                    life1[i]='B';
                }else{
                    life1[i]='A';
                }
            }else if(life[i]=='A'){
                if((b>0)||(a>4)||(a<2)){
                    life1[i]='.';
                }
            }else if(life[i]=='B'){
                if((a>0)||(b>4)||(b<2)){
                    life1[i]='.';
                }
            }
        }
        for(int i=0;i<len;i++){
            life[i]=life1[i];
        }
    }
    printf("%s",life);
}