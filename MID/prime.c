int main()
{
    int num,i=2,flag=0;
    scanf("%d",&num);
    while(i<sqrt(num)){

    while(num%i==0){
    flag=1;
    printf("not prime");
    i=i+1;
    }
     printf("prime");
    }
}

