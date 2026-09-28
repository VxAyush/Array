#include<stdio.h>
int main(){
    int marks[5]={56,85,38,94,73};
    int sum=0;

    for(int i=0; i<5; i++){
        sum=sum+marks[i];
    }
    float average = (float)sum/5;

    printf("average: %.2f",average);
    return 0;
}