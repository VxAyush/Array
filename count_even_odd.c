int main(){
    int a[6]={34,46,23,45,23,89};
    int even=0 , odd=0;

    for(int i=0; i<6; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        
        else
        
            odd++;
        
    }
    printf("even number: %d\n",even);
    printf("odd number: %d\n",odd);
    return 0;
}