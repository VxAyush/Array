#include<stdio.h>
int main(){
    int n,temp;
    printf("enter the number of element: ");
    scanf("%d", &n);
    int a[n];

    for(int i=0;i<n;i++){
        printf("enter %d num: ",i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    printf("deccending array: ");
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}