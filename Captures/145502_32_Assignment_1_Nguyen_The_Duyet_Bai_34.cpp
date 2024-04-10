/*
   Program: Assignment 1 - Exercise 34
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 34");
    //ax*x + bx +c =0
    float a, b, c;
    printf("Nhap vao so thuc a, b, c: ");
    do{
        printf("\na = "); scanf("%f", &a);
        if(a==0) printf("\nNhap lai a");
    }while(a==0);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
    float d=b*b-4*a*c;
    if(d>0) printf("x1 = %.2f, x2 = %.2f", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else if(d==0) printf("NGHIEM KEP: %.2f", -b/(2*a));
    else printf("VO NGHIEM");
    return 0;
}