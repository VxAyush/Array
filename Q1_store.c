// #include<stdio.h>
// int main(){
//     int a[5]={10,20,30,40,50};
//     for(int i=0; i<5; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// Q2) Take input from user
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of element: ");
//     scanf("%d",&n);

//     int a[n];

//     printf("Enter %d number: \n",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     printf("You entered: \n");
//     for(int i=0; i<n; i++){
//     printf("%d\n", a[i]);
//     }
//     return 0;
// }

//Q3) sum of array
// #include<stdio.h>
// int main(){
//     int n;

//     printf("how many number you want to sum:  ");
//     scanf("%d",&n);
//     int a[n];

//     printf("enter %d number for sum: \n",n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }

//     int sum=0;
//     for (int i=0; i<n;i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("sum of %d numbers: %d",n,sum);
//     return 0;
// }

//Q4) Average of entered number
// #include<stdio.h>
// int main(){
//     int n ,sum=0;
//     float average;
//     printf("enter the number: ");
//     scanf("%d",&n);

//     int a[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//         sum+=a[i];
//     }
//     average=(float)sum/n;
//     printf("average: %.2f\n",average);
//     return 0;

// }

//Q5) find the largert number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number of elements: ");
//     scanf("%d",&n);

//     int a[n];
//     printf("enter %d number: \n",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     int greater= a[0];

//     for(int i=1; i<n; i++)
//     {
//         if(a[i] > greater)
//         {
//             greater=a[i];
//         }
//     }
//     printf("largest  number: %d\n",greater);
//     return 0;
// }

//Q6) find smallest number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number of element: ");
//     scanf("%d",&n);
//     int a[n];

//     printf("enter %n number to find smallest number",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     int smallest=a[0];
//     for(int i=0; i<n; i++){
//         if(a[i] < smallest)
//         {
//             smallest = a[i];

//         }
//     }
//     printf("smallest number: %d\n",smallest);
//     return 0;
// }

//Q7)count even and odd
// int main(){
//     int a[6]={34,46,23,45,23,89};
//     int even=0 , odd=0;

//     for(int i=0; i<6; i++)
//     {
//         if(a[i] % 2 == 0)
//             even++;
        
//         else
        
//             odd++;
        
//     }
//     printf("even number: %d\n",even);
//     printf("odd number: %d\n",odd);
//     return 0;
// }

//Q8) Count the positive ,negative and zero
// #include<stdio.h>
// int main(){
//     int n;
//     int pos=0, neg=0, zero=0;
//     printf("enter the number of element: ");
//     scanf("%d",&n);
//     int a[n];
    
//     printf("enter %n number: ",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(a[i]>0){
//             pos++;
//         }
//         else if(a[i]<0){
//             neg++;
//         }
//         else{
//             zero++;
//         }
//     }
//     printf("postive number: %d\n",pos);
//     printf("negative number: %d\n",neg);
//     printf("zero number: %d\n",zero);
//     return 0;

// }

//Q9)  Reverse the array
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number of element: ");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter %d number: ",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }

//     for(int i=n; i>0; i--){
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }


//Q10) search the element in array and count how many times it repeats
// #include<stdio.h>
// int main(){
//     int n, key, count = 0;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n];

//     printf("Enter %d numbers:\n", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the number to find: ");
//     scanf("%d", &key);

//     printf("The number %d appears at index(es): ", key);
//     for(int i = 0; i < n; i++){
//         if(a[i] == key){
//             count++;
//             printf("%d ", i);
//         }
//     }

//     if(count == 0){
//         printf("\nElement not found\n");
//     }
//     else{
//         printf("\nTotal occurrences: %d\n", count);
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n ,key ,count=0,found=0;
//     printf("enter the element: ");
//     scanf("%d",&n);

//     int a[n];
     
//     printf("enter %d number: \n",n);
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[n]);
//     }

//     printf("enter the number to find :");
//     scanf("%d",&key);

//     printf("enter the %d appear at index(es): ",key);
//     for(int i=0; i<n; i++){
//         if(a[i] == key){
//             count++;
//             printf("%d ",i);
//         }

//     }
//     if(found == 0) {printf("\n element not found\n");}
//     else {printf("\n found\n");}
//     return 0;


// }


//Q11) find the position of element
// #include<stdio.h>
// int main(){
//     int n,key,count=0;
//     printf("enter the number of element: ");
//     scanf("%d\n",&n); 
//     int a[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter the number to find: ",key);
//     scanf("%d",&key);

//     printf("enter no. %d to find index",key);

//     for(int i=0;i<n;i++){
//         if(a[i] == key)
//         {
//             printf("positon= %d",i);
//             break;
//         }
//     }
//     return 0;

    

// }

//Q12)   Copy one array into another
#include<stdio.h>
int main(){
    int n;
    printf("enter the array: ");
    scanf("%d\n",&n);

    int a[n];
    int b[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ",b[i]);
    }
    return 0;

}