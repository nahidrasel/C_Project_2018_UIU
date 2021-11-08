int main()
{
int i,base,expo,p=1;
scanf("%d",&base);
scanf("%d",&expo);
for(i=1;i<=expo;i++){
p=p*base;
}
printf("%d",p);
}
