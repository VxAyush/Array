#include<stdio.h>
int main(){
    int n;
    printf("enter number of element: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter %d number: ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}


//OUTPUT(we have to wrie the code after repeating more than 
//twice a number it should be show only ine repatetion )

// enter number of element: 8
// enter 1 number: 2
// enter 2 number: 4
// enter 3 number: 2
// enter 4 number: 6
// enter 5 number: 2
// enter 6 number: 4
// enter 7 number: 2
// enter 8 number: 4
// 2 4 2 2 4 
