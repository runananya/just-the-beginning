#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world \n");
    printf("Let's convert temperatures!\n");
    int f;
    int c;
    int choice;
    
    printf("1.Celsius to Farhrenheit \n ");
    printf("2.Farhenheit to Celsius \n");
    printf("Input your choices:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("Enter the Temp in Celsius:\n");
        scanf("%d",&c);
        f=(c*9/5)-32 ;
        printf("This is your temp in farhenheit2:%d ",f);
        break;
        case 2:
        printf("Enter the Temp in Farhenheit:");
        scanf("%d",&f);
        c=5/9*(f-32);
        printf("This is your temp in Celsius:%d \n",c);
        break;
        
        
    }
    printf("Thank you for using my application");
    
    }