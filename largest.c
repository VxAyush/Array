#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);

    int a[n];
    printf("enter %d number: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int greater= a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i] > greater)
        {
            greater=a[i];
        }
    }
    printf("largest  number: %d\n",greater);
    return 0;
}