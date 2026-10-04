#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int c = a%3;
    if (c == 0 && a > 0) {
        printf("positive and divisible by 3");
    }else{
        printf("not positive and divisible by 3");
    }
    return 0;
}