/*
   Program: Assignment 1 - Exercise 36
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 36");
    float a, b, c;
    printf("\nNhap vao ba so thuc a, b, c: ");
    printf("\na = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
    if(a==0){
        if(b==0){
            if(c==0) printf("Phuong trinh vo so nghiem");
            else printf("Phuong trinh vo nghiem");
        }
        else printf("Phuong trinh co nghiem kep: %.2f", -c/b);
    }
    else{
        float d=b*b-4*a*c;
        if(d>0) printf("x1 = %.2f, x2 = %.2f", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
        else if(d==0) printf("NGHIEM KEP: %.2f", -b/(2*a));
        else printf("VO NGHIEM");
    }
    return 0;
}