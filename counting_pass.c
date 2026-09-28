#include<stdio.h>
int main(){
    int marks[6]={35,24,72,37,84,34};
    int passcount=0;

    for(int i=0; i<6; i++){
        if(marks[i]>=40){
            passcount++;
        }
    }
    printf("Passed student= %d",passcount);
    return 0;
}