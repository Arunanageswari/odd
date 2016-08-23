#include<conio.h>
void main(){

    int a;
 scanf("%d",&a);
    if(((a%4==0)&&(a%100!=0))||(a%400==0))
printf("leap year");
         else
    printf("not a leap year");

}
