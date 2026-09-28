#include<stdio.h>
int main(){
    int roll[5]={1023,1024,1026,1029,1022};
    int target=1028;
    int found =0;
    for(int i=0; i<5; i++){
        if(roll[i] == target){
            found=1;
            break;
        }
    }
    if(found){
        printf("ROll no is found");
    }
    else{
        printf("not found");
    }
}