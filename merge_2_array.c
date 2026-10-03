#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of element ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c[n*2];

    for(int i=0;i<n;i++){
        printf("enter %d no.", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        printf("enter %d no.", i+1);
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n;i++){
        c[n + i]=b[i];
    }
    printf("[");
    for(int i=0;i<n*2;i++){
        printf("%d ", c[i]);
    }
    printf("]\n");
    return 0;

}