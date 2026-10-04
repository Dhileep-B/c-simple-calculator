#include <stdio.h>
int main (){
    int a,b;
    printf("Enter value A: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);
    char c;
    printf("Enter the operation (+,-,*,/,%%): ");
    scanf(" %c", &c);
    switch(c){
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        if(b==0){
            printf("Error: Division by zero is not allowed.");
        } else {
            float div1 = (float)a;
            float div2 = (float)b;
            printf("%.2f", div1/div2);
        }
        break;
        case '%':
        if (b==0){
            printf("Invalid Input.");
        }else{
            printf("%d", a%b);
        }
        break;  
        default:
        printf("Invalid operation \n");
        break;
    }
    return 0;
    
}