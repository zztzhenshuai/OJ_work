#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    char str[1000]={0};
    int max=0;
    char table[32][32]={0};
    scanf("%d",&n);
    getchar();
    scanf("%s",str);
    int letter[26]={0};
    int Letter[26]={0};
    for(int i=0;i<n;i++){
        if(str[i]>96&&str[i]<123){
            letter[str[i]-97]++;
        }else{
            Letter[str[i]-65]++;
        }
    }
    int num[26]={0};
    int NUM[26]={0};
    int sub1=0;
    int sub2=0;
    for(int i=0;i<26;i++){
        if(max<letter[i]){
            max=letter[i];
        }
        if(letter[i]!=0){
            num[sub1]=i+97;
            sub1++;
        }
    }
    for(int i=0;i<26;i++){
        if(max<Letter[i]){
            max=Letter[i];
        }
        if(Letter[i]!=0){
            NUM[sub2]=i+65;
            sub2++;
        }
    }
    int left=0;
    int right=0;
    int sub3=0;
    char last_line[78]={0};
    if(sub1!=0&&sub2!=0){
        int is_underlimit=1;
        while(is_underlimit){
            if(num[left]<NUM[right]+32){
                char a=num[left];
                last_line[sub3]=a;
                last_line[sub3+1]=' ';
                sub3+=2;
                left++;
            }else if(num[left]==NUM[right]+32){
                char a=num[left];
                char b=NUM[right];
                last_line[sub3]=a;
                last_line[sub3+1]=b;
                last_line[sub3+2]=' ';
                sub3+=3;
                left++;
                right++;
            }else{
                char b=NUM[right];
                last_line[sub3]=b;
                last_line[sub3+1]=' ';
                sub3+=2;
                right++;
            }
            if(left==sub1||right==sub2){
                is_underlimit=0;
            }
        }
    }

    if(left<sub1){
        for(int i=left;i<sub1;i++){
            char a=num[i];
            last_line[sub3]=a;
            last_line[sub3+1]=' ';
            sub3+=2;
        }
    }
    if(right<sub2){
        for(int i=right;i<sub2;i++){
            char b=NUM[i];
            last_line[sub3]=b;
            last_line[sub3+1]=' ';
            sub3+=2;
        }
    }
    for(int j=0;j<strlen(last_line);j++){
        for(int i=max;i>0;i--){
            if(last_line[j]>96&&last_line[j]<123){
                if(max-i<letter[last_line[j]-97]){
                    table[i][j]='=';
                }else{
                    table[i][j]=' ';
                }
            }else if(last_line[j]>64&&last_line[j]<91){
                if(max-i<Letter[last_line[j]-65]){
                    table[i][j]='=';
                }else{
                    table[i][j]=' ';
                }
            }else{
                table[i][j]=' ';
            }
        }
    }
    for(int i=1;i<=max;i++){
        for(int j=0;j< strlen(last_line);j++){
            printf("%c",table[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<strlen(last_line)-1;i++){
        printf("-");
    }
    printf("\n");
    printf("%s",last_line);
}