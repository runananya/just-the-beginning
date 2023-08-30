#include <stdio.h>
int kms();
int foot();
int cms();
int pounds();
int meters();
int main() {
    int choice;
    printf("Hello \n");
    printf("1. Kms to Miles \n");
    printf("2. Inches to Foot \n ");
    printf("3. Cms to Inches\n ");
    printf("4.Pounds to kgs \n");
    printf("5. Inches to Meters \n");
    printf("Pick your choice: ");
    scanf("%d",&choice);
        
        switch(choice){
            case 1:
            kms();
            break;
            
            case 2:
            foot();
            break;
            
            case 3:
            cms();
            break;
            
            case 4:
             pounds();
            break;
            
            case 5:
             meters();
            break;
        }
}

int kms(){
    int k;
    float miles;
    printf("Enter Kilometers=  \n");
    scanf("%d",&k);
    miles= k* 0.621371;
  printf("the answer is : %f",miles);
    
}


int foot(){
    int in;
    float f;
     printf("Enter inches=  \n");
    scanf("%d",&in);
   f=in*0.0833;
   printf("the answer is : %f",f);
}

int cms(){
    int cm;
    float inc;
     printf("Enter cms=  \n");
    scanf("%d",&cm);
    inc=cm/2.54;
     printf("the answer is : %f",inc);
}

int pounds(){
    int po;
    float kgs;
     printf("Enter pounds=  \n");
    scanf("%d",&po);
    kgs=po*0.45359237;
         printf("the answer is : %f",kgs);
    
    
}

int meters(){
    int i;
    float m;
    printf("Enter inches=  \n");
    scanf("%d",&i);
     m=i/39.37;
       printf("the answer is : %f",m);
     
}