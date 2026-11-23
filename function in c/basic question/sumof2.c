#include<stdio.h> 
 
int add(int a , int b) {    

return a+b;
}

int main () {
    
int a,b;

printf(" enter a = ");
scanf("%d",&a);
printf("enter b = ");
scanf("%d",&b);
int sum = add(a,b) ; // add function return value a+b which is store in sum variable

printf("sum = %d",sum);
return;

}