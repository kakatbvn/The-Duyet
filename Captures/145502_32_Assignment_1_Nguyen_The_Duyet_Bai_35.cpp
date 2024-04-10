/*
   Program: Assignment 1 - Exercise 35
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 35");
    float a, b, c;
    printf("\nNhap vao ba so thuc a, b, c: ");
    printf("\na = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
    if(a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0){
        float p=(a+b+c)/2;
        printf("%.2f", p*2);
        printf("\n%.2f", sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    else printf("Khong phai tam giac !");
    return 0;
}