#include<stdio.h>
int main(){
    int n;
    printf("enter no. of element in array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    
    for(int i=0;i<n;i++){
        printf("enter %d no.: ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        printf("enter %d no.: ",i+1);
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
                break;
            }

        }
    
    }
    return 0;

}