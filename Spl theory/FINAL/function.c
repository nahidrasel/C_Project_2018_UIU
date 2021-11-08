char test(int x)
{
if((x%2)==0){
return 'e';
}
else{
return 'o';
}
}
int main()
{
int n;
char ch;
scanf("%d",&n);
ch=test(n);
printf("%c",ch);
}
