void func(int value)
{
    if(value%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}


int main()
{
    int a;
    scanf("%d",&a);
    func(a);


    return 0;
}
