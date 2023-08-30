#include <stdio.h>
int fac(int num){
    int fact;
    if(num==1||num==0){
        return 1;
    
    }
    else{
    return (num*fac(num-1));
    }
}
int main() {
    int num,fact;
    printf("Hello world \n");
    printf("let's factorial! \n");
    
    printf("enter the number= ");
    scanf("%d",&num);
    
    fact= fac(num);
    printf("the factorial is %d",fact);

  
}