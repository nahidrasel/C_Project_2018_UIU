int main()
{
int col,row;
int n;
scanf("%d",&n);
for(row=1;row<=n;row++){
for(col=1;col<=row;col++){
        printf("%d",col);
        }
    for(col=n-1;col>=row;col--){
    printf( "_");}
        for(col=col-row;col>=1;col--){
        printf("%d",col);
        }
printf("\n");
    }
}
