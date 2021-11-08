int main()
{
    int base,expo,i,p;
    scanf("%d%d",&base,&expo);
    for(i=1;i<=expo;i++)
    {
        p=base*p;
    }
    printf("%d^%d=%d",base,expo,p);

}
