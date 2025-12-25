#include <stdio.h>

int main(){
        
        int number;

        do {
                printf("Enter an integer: ");
                scanf("%d", &number);
        }
        while (number >= 0);

        return 0;

}
