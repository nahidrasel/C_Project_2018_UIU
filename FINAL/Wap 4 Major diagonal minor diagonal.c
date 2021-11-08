int main()
{
    int a[5][5];
    int i,j,d,r1,r2,r3,anti;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        scanf("%d",&a[i][j]);
        }
        }
      for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(i==j)
printf("%d ",a[i][j]);
}
      }
      printf("\n");
        for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(i+j==2)
                    printf("%d ",a[i][j]);
                    }
                    }
                    }
