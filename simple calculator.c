// simple calculator 
#include <stdio.h>
int main( )  {
    int n1, n2; 
    char op;
    printf("enter operation  + - / *  and modulo \n");
    scanf("%c", &op);
    printf("enter 2 number \n");
    scanf("%d %d", &n1, &n2);

    switch (op)  {
    case '+':
        printf("Answer = %d", n1 + n2);
        break;
    case '-':
        printf("Answer = %d", n1 - n2);
        break;
    case '/':
        printf("Answer = %d", n1 / n2);
        break;
    case '*':
        printf("Answer = %d", n1 * n2);
        break;
    case '%':
        printf("Answer = %d", n1 % n2);
    }
    return 0;
}