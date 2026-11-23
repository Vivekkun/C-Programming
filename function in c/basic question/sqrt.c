#include<stdio.h>
#include<math.h>

int function(){
    int a,b;
    printf(" enter a = ");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    int rootofa = sqrt(a);
    int rootofb =sqrt (b);
  
    printf("squre root of %d is %d \n",a,rootofa);
    printf("squre root of %d is %d \n",b,rootofb);
    
    return 0;
}

int main (){
    
    function ();
}