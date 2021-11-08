int main()
{
int n,i,rev=0;
scanf("%d",&n);
if(n!=0){
for(i=1;i<=n;i++){
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("%d",rev);
}
}
