#include<stdio.h>
int main(){
    int n;
    printf("Enter number of element: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d number: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("You entered: \n");
    for(int i=0; i<n; i++){
    printf("%d\n", a[i]);
    }
    return 0;
}