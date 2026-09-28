#include<stdio.h>
int main(){
    int n;
    int pos=0, neg=0, zero=0;
    printf("enter the number of element: ");
    scanf("%d",&n);
    int a[n];
    
    printf("enter %n number: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]>0){
            pos++;
        }
        else if(a[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("postive number: %d\n",pos);
    printf("negative number: %d\n",neg);
    printf("zero number: %d\n",zero);
    return 0;

}