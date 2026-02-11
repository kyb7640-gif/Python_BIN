#include <stdio.h>

int main(void){
    int num = 665;
    int cnt = 0;
    int real_cnt = 0;
    int N,i;
    char str[9];
    
    scanf("%d",&N);
    
    while(!0){
        ++num;
        sprintf(str,"%d",num);
        for(i=0;i<9;i++){
            if(str[i]=='6') ++cnt;
            else cnt=0;
            if(cnt==3){
                real_cnt++;
                break;
            }
        }
        cnt=0;
        if(real_cnt==N){
            printf("%d",num);
            break;
        }
    }
    
    return 0;
}