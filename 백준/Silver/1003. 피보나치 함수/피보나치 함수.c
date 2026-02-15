#include <stdio.h>

int main(void){
    int T,i,num;
    int fibonacci[41]={0};
    fibonacci[1] = 1;
    
    for(i=2;i<41;i++){
        fibonacci[i] = fibonacci[i-2]+fibonacci[i-1];
    }
    
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
        scanf("%d",&num);
        if(num==0){
            printf("1 0\n");
        }
        else{
            printf("%d %d\n",fibonacci[num-1],fibonacci[num]);
        }
    }
    
    return 0;
}