int main()
{
int n,t,sum=0,rem;
scanf("%d",&t);
while(t!=0){
rem=t%10;
sum=sum+rem;
t=t/10;
}
printf("%d",sum);
}
