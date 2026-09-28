#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element: ");
    scanf("%d",&n);
    int a[n];

    printf("enter %n number to find smallest number",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int smallest=a[0];
    for(int i=0; i<n; i++){
        if(a[i] < smallest)
        {
            smallest = a[i];

        }
    }
    printf("smallest number: %d\n",smallest);
    return 0;
}