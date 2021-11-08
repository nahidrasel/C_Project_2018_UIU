int main()
{
int sum=0,a[2][6];
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<6;j++){
        scanf("%d",&a[i][j]);
        }
        }
for(i=0;i<2;i++){
    for(j=0;j<6;j++){
        sum=sum+a[i][j];
    }
}
printf("%d",sum);
}
