int main()
{
int r,c,k;
for(r=3;r>=1;r--){
for(c=1;c<=r;c++)
printf("$");
for(k=r-1;k<=1;k++)
printf("?");
printf("\n");
}
}
