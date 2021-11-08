int main()
{
int i,j,n,k;
scanf("%d",&n);
for(i=0;i<n;i++) {
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++) {
                if(k%2==0){
                printf("0");
        }
        else { printf("1");
        }
        }
printf("\n");
}
}
