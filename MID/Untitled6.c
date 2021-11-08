int main()
{
int n,i,number;
float sum=0;
float average;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%f",&number);
sum=sum+number;
}
average=sum/n;

printf("%d\t",sum);
printf("%0.2f",average);

}
