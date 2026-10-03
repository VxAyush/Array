#include<stdio.h>
int main(){
    int n,key,count=0;
    printf("enter the number of element: ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("enter %d number: ",i);
        scanf("%d", &a[i]);
    }
    printf("enter the key: ");
    scanf("%d", &key);

    for(int i=0;i<n;i++){
        if(a[i] == key){
            count += 1;
        }
    }

    printf("frequency %d\n", count);
    return 0;
}