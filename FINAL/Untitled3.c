int main()
{
    int i,j,k;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n-i;j++){
                if(i%2==0)
                printf("*_*");
                else{
                    printf("*");
                }
    }
}
}
