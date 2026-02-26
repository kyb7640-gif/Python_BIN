#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[51];
    int plus_num[50] = { 0 };
    int minus_num[50] = { 0 };
    int plus_cnt = 0;
    int minus_cnt = 0;
    int i = 0;
    int is_minus = 0;
    int plus_sum = 0;
    int minus_sum = 0;

    scanf("%s", str);

    plus_num[plus_cnt++] = atoi(&str[0]);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == '-') {
            is_minus = 1;
        }
        if (is_minus == 0 && str[i] == '+') {
            plus_num[plus_cnt++] = atoi(&str[i + 1]);
        }
        else if (is_minus == 1 && str[i] == '+') {
            minus_num[minus_cnt++] = atoi(&str[i + 1]);
        }
        else if (is_minus == 1 && str[i] == '-') {
            minus_num[minus_cnt++] = atoi(&str[i + 1]);
        }
    }
    for (i = 0; i < plus_cnt; i++) {
        plus_sum += plus_num[i];
    }
    for (i = 0; i < minus_cnt; i++) {
        minus_sum += minus_num[i];
    }
    
    printf("%d", (plus_sum - minus_sum));

    return 0;
}