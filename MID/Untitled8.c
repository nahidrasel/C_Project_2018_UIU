int main()
{

int arr[5],index,sum=0,n;
scanf("%d",&n);
for(index=1;index<=n;index++){
scanf("%d",&arr[index]);
sum+=arr[index];
printf("%d ",sum);
}
}
