int main()
{
int a,b,r,choice;
printf("Enter two number:");
scanf("%d%d",&a,&b);
printf("Enter a choice: 1.For sum, 2.For subtraction, 3.For Multiplication, 4/others: For Divided :");
scanf("%d",&choice);
switch(choice){
case 1 :
r=a+b;
break;

case 2 :
r=a-b;
break;

case 3 :
r=a*b;
break;

default :
r=a/b;
break;
}
printf("%d",r);
}
