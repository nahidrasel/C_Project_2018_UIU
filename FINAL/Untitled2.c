int main()
{
int col,row;
int n;
scanf("%d",&n);
for(row=1;row<=n;row++){
for(col=row-1;col>=1;col--){
        printf("%d",col);
        }
        printf("\n");
        }
}
