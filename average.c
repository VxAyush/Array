#include<stdio.h>
int main(){
    int n ,sum=0;
    float average;
    printf("enter the number: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    average=(float)sum/n;
    printf("average: %.2f\n",average);
    return 0;

}