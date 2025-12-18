#include <stdio.h>

int main(){
    int num1, num2, choice, sum, diff, mul, div;
    printf("Enter an Integer: ");
    scanf("%d", &num1);
    printf("Enter another Integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    printf("Calculation menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nYour choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("%d\n", sum);
        break;
        case 2:
        printf("%d\n", diff);
        break;
        case 3:
        printf("%d\n", mul);
        break;
        case 4:
        printf("%d\n", div);
        break;
        default:
        printf("Invalid Selection.\n");
      }
    return 0;
  }
