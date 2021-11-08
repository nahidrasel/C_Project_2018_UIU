int main()
{
    int num2,num3,num1,tri;
    scanf("%d%d%d",&num1,&num2,&num3);
    while((0<num1>180)||(0<num2>180)||(0<num3>180))
    {
        tri=num1+num2+num3;
        if(tri>180) {
        printf("%d is triangle",tri);
        }
    else {  printf("%d isn,t traingle",tri);
    }
}
}
