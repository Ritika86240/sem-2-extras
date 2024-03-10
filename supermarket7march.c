#include<stdio.h>
int supermarket(int a[], int n){    
    int c,d,t,i;    

    for(c=0;c<n-1;c++){
        for( d=0;d<n-c-1;d++){
            if (a[d]>a[d+1]){
                t=a[d];
                a[d]=a[d+1];
                a[d+1]=t;
            }
        }
    }
}
int main (){
    int a[1000],i, n;
    printf(" enter the value of n");
    scanf(" %d",&n);
    printf(" array ");
    for (i=0;i<n;i++){
        scanf(" %d",a[i]);
    }
    supermarket(a, n);
    for ( i=0;i<n;i++){
        printf(" The Array %d",a[i]);
    }
    return 0;
}




