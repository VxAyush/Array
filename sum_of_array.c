#include<stdio.h>
int main(){
    int n;

    printf("how many number you want to sum:  ");
    scanf("%d",&n);
    int a[n];

    printf("enter %d number for sum: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int sum=0;
    for (int i=0; i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of %d numbers: %d",n,sum);
    return 0;
}