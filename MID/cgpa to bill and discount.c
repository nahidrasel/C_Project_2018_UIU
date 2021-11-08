int main(){
float cgpa;
int bill=60000,tb;
scanf("%f",&cgpa);
if(cgpa==4.00){
tb=bill-(bill*0.95);
printf("%d",tb);
}
else if((cgpa>=3.95)&&(cgpa<=3.99)){
tb=bill-bill*0.85;
printf("%d",tb);
}
else if((cgpa>=3.85)&&(cgpa<=3.94)){
tb=bill-bill*0.75;
printf("%d",tb);
}
else if((cgpa>=3.70)&&(cgpa<=3.84)) {
tb=bill-bill*0.50;
printf("%d",tb);
}
else if((cgpa>=3.60)&& (cgpa<=3.69)) {
tb=bill-bill*0.25;
printf("%d",tb);
}
else if((cgpa>=3.50)&&(cgpa<=3.59)){
tb=bill-bill*0.10;
printf("%d",tb);

}
}
