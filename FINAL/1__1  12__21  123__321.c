int main()
{
int i,j,k,n,m,reverse=0;
scanf("%d",&n);
for(i=1;i<=n;i++) {
for(j=1;j<=i;j++) {
        printf("%d",j);
}
for(k=i;k<n;k++) {
        printf("__");
}
for(m=j-1;m>=1;m--){
printf("%d",m);
}
printf("\n");
}
}

