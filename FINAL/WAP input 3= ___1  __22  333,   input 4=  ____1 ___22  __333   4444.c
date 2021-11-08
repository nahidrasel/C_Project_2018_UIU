int main()
{
int i,j,k,l,n,m;
scanf("%d",&n);
for(i=1;i<=n;i++) {
        for(j=n;j>i;j--) {
            printf("_");
        }
        for(k=1;k<=i;k++) {

            printf("%d",i);
        }
        printf("\n");
        }
}
