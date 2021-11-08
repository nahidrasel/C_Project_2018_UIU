int a=10;
int func1(int i){
int a=5;
return a+i;
}
int func2(int j){
int x=func1;
return a+x;
}
void main()
{
int i=5,j=2;
int x=func1(i);
int y=func2(j);
printf("%d %d",x,y);
}
