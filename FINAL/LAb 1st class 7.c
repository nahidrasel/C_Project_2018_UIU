int main()
{
int i,j,k=1;
for(i=5;i>0;i--) {
        for(j=0;j<i;j++){
            printf("*");
        }
        for(j=0;j<k;j++) {
                printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
}
printf("\n");
k=k+2;
}
}
