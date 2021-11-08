int main()
{
int i,n,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;

printf("%d^%d+",i,i);
}

printf("  =%d",sum);
}
