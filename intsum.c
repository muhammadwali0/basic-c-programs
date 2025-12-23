#include <stdio.h>

int main(){

        int number, sum = 0, i = 0;

        printf("Enter a positive integer: ");
        scanf("%d", &number);

        if(number > 0){
                while(i<number){
                sum += (i + 1);
                i++;
                }
        
                printf("The sum of all the positive integers up to %d is %d.\n", number, sum);
        }

        else{
                printf("Invalid choice.\n");
        }

        return 0;
        
}       
