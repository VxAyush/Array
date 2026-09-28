#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=n; i>0; i--){
        printf("%d\t",a[i]);
    }
    return 0;
}