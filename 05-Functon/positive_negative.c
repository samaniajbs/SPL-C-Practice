void func(int value)
{
    if(value>0){
        printf("Positive");
    }
    else if(value<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}


int main()
{
    int a;
    scanf("%d",&a);
    func(a);


    return 0;
}
