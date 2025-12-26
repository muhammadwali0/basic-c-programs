#include <stdio.h>

int main(){

        int number;

        do{
                printf("Enter an Integer: ");
                scanf("%d", &number);
                if(number!=0){
                        printf("%d is the number you input.\n", number);
                }
        }
        while(number!=0);

        return 0;

}
