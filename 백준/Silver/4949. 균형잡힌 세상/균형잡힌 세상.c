#include <stdio.h>
#include <string.h>

int main(void){
    int cnt,i;
    int isright;
    char str[102];
    char stack[102];
    
    while(!0){
        cnt = -1;
        isright = 1;
        fgets(str,102,stdin);
        if(str[0]=='.') break;
        str[strlen(str)-1]='\0';
        
        for(i=0;i<strlen(str);i++){
            if(str[i]=='(' || str[i]=='['){
                stack[++cnt] = str[i];
            }
            else if(str[i]==')'){
                if(cnt>=0&&stack[cnt]=='('){
                    cnt--;
                }
                else{
                    isright = 0;
                    break;
                }
            }
            else if(str[i]==']'){
                if(cnt>=0&&stack[cnt]=='['){
                    cnt--;
                }
                else{
                    isright = 0;
                    break;
                }
            }
        }
        
        if(isright==1 && cnt==-1) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}