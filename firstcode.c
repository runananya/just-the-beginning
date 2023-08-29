#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world \n");
       int n;
    int multiple;

    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    multiple=n*i;
    printf("%d*%d=%d \n",n,i,multiple);
    
    
    }

    return 0;
}