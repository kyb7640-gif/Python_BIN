#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int age;
    char name[101];
    int n;
} User;

int compare(const void *a, const void *b){
    User *u1 = (User*)a;
    User *u2 = (User*)b;
    
    if(u1->age != u2->age) return (u1->age - u2->age);
    
    return (u1->n - u2->n);
}

int main(void){
    int N,i;
    User list[100000];
    
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d %s", &list[i].age, list[i].name);
        list[i].n = i;
    }
    
    qsort(list, N, sizeof(User), compare);
    
    for(i=0;i<N;i++){
        printf("%d %s\n",list[i].age, list[i].name);
    }
    
    return 0;
}