#include <stdio.h>
#include <math.h>

int main(void){
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    int step=abs(x2-x1)+abs(y2-y1);
    if(x1==x2&&y1>y2){
        if(x3==x1&&y3<y1&&y3>y2){
            step+=2;
            printf("%d\n",step);
            printf("R");
            for(int i=0;i<y1-y2;i++){
                printf("D");
            }
            printf("L");
        }else{
            printf("%d\n",step);
            for(int i=0;i<y1-y2;i++){
                printf("D");
            }
        }
    }else if(x1==x2&&y2>y1){
        if(x3==x1&&y3<y2&&y3>y1){
            step+=2;
            printf("%d\n",step);
            printf("R");
            for(int i=0;i<y2-y1;i++){
                printf("U");
            }
            printf("L");
        }else{
            printf("%d\n",step);
            for(int i=0;i<y2-y1;i++){
                printf("U");
            }
        }
    }else if(y1==y2&&x2>x1) {
        if (y3 == y1 && x3 < x2 && x3 > x1) {
            step+=2;
            printf("%d\n",step);
            printf("U");
            for (int i = 0; i < x2 - x1; i++) {
                printf("R");
            }
            printf("D");
        } else {
            printf("%d\n",step);
            for (int i = 0; i < x2 - x1; i++) {
                printf("R");
            }
        }
    }else if(y1==y2&&x2<x1){
        if(y3==y1&&x3<x1&&x3>x2){
            step+=2;
            printf("%d\n",step);
            printf("U");
            for(int i=0;i<x1-x2;i++){
                printf("L");
            }
            printf("D");
        }else{
            printf("%d\n",step);
            for(int i=0;i<x1-x2;i++){
                printf("L");
            }
        }
    }else if(x2>x1&&y2>y1){
        printf("%d\n",step);
        if((y3==y1&&x3>x1&&x3<=x2)||(x3==x2&&y3>=y1&&y3<y2)){
            for(int i=0;i<y2-y1;i++){
                printf("U");
            }
            for(int i=0;i<x2-x1;i++){
                printf("R");
            }
        }else{
            for(int i=0;i<x2-x1;i++){
                printf("R");
            }
            for(int i=0;i<y2-y1;i++){
                printf("U");
            }
        }
    }else if(x2<x1&&y2<y1){
        printf("%d\n",step);
        if((y3==y1&&x3>=x2&&x3<x1)||(x3==x2&&y3<=y1&&y3>y2)){
            for(int i=0;i<y1-y2;i++){
                printf("D");
            }
            for(int i=0;i<x1-x2;i++){
                printf("L");
            }
        }else{
            for(int i=0;i<x1-x2;i++){
                printf("L");
            }
            for(int i=0;i<y1-y2;i++){
                printf("D");
            }
        }
    }else if(x2>x1&&y2<y1){
        printf("%d\n",step);
        if((y3==y1&&x3>x1&&x3<=x2)||(x3==x2&&y3>y2&&y3<=y1)){
            for(int i=0;i<y1-y2;i++){
                printf("D");
            }
            for(int i=0;i<x2-x1;i++){
                printf("R");
            }
        }else{
            for(int i=0;i<x2-x1;i++){
                printf("R");
            }
            for(int i=0;i<y1-y2;i++){
                printf("D");
            }
        }
    }else{
        printf("%d\n",step);
        if((y3==y1&&x3>=x2&&x3<x1)||(x3==x2&&y3>=y1&&y3<y2)){
            for(int i=0;i<y2-y1;i++){
                printf("U");
            }
            for(int i=0;i<x1-x2;i++){
                printf("L");
            }
        }else{
            for(int i=0;i<x1-x2;i++){
                printf("L");
            }
            for(int i=0;i<y2-y1;i++){
                printf("U");
            }
        }
    }
}