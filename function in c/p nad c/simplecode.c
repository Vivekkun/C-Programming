// find ncr 

#include<stdio.h>
int main(){
    
    int n , r ;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter r :");
    scanf("%d",&r);
    int nfact = 1 ; // n! 
    int rfact = 1 ; // r!
    int nrfact = 1 ;  // n-r
    if(n<0 || r<0 || n<r){
        printf("invalid input");
    }
    else
    {
        for (int i=2 ; i <= n ; i++){
        nfact = nfact*i;
       }

    for (int i=2 ; i <= r ;i++){
        rfact = rfact * i;
       }

    for (int i=2 ; i<= n-r ; i++){
        nrfact = nrfact*i;
       }

    int ncr = nfact/(rfact*nrfact);
    printf("%d ", ncr);
    }
    
    return 0;


}