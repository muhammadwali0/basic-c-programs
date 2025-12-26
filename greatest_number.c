#include <stdio.h>

int main(){
int number1,number2,number3;
printf("Enter an integer: ");
scanf("%d", &number1);
printf("Enter another integer: ");
scanf("%d", &number2);
printf("Enter another integer: ");
scanf("%d", &number3);
if(number1>=2 && number1>=3){
printf("%d is the greatest number.\n", number1);
}
else if(number2>=1 && number2>=3){
printf("%d is the greatest number.\n", number2);
}
else{
printf("%d is the greatest number.\n", number3);
}
return 0;
}
