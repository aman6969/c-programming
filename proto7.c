/*while purchasing certain items, a discount of 10% if offered if the quantity
purchased is more than 1000. If quantity and price per item are input through
the keyboard, write a program to calculate the total expenses*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int qty,dis=0;
    float rate ,tot;
    printf("Enter quantity and rate\n");
    scanf("%d%f",&qty,&rate);
    if(qty>1000){
        dis=10;
tot=(qty*rate)-(qty*rate*dis/100);
printf("Total expenses=Rs.%f",tot);
    }
}