int main()
{
int col,row,n,m;
scanf("%d",&n);
for(col=1;col<=n;col++){
m=col;
for(row=1;row<=col;row++,m++){
printf("%d",m);
}
printf("\n");
}
}
