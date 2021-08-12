#include <cs50.h>
#include <stdio.h>

int main(void){
    int a = get_int("Height: ");
    while(!(a>=1 && a<=8)){
        a = get_int("Height: ");
    }
    for(int i=1; i<=a; i++){
        for(int j = a-i-1; j>=0; j--)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            printf("*");        
        }
    printf("  ");
        for(int j=1; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
}