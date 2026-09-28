#include<stdio.h>
int main(){
    int n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &key);

    printf("The number %d appears at index(es): ", key);
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            count++;
            printf("%d ", i);
        }
    }

    if(count == 0){
        printf("\nElement not found\n");
    }
    else{
        printf("\nTotal occurrences: %d\n", count);
    }

    return 0;
}