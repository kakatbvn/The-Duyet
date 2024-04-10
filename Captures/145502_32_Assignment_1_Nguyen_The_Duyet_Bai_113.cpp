/*
   Program: Assignment 1 - Exercise 113
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(){
    printf("This is Assignment 1-Exercise 113");
    float a1, b1, c1, a2, b2, c2;
    /*
       a1x + b1y = c1
       a2x + b2y = c2
    */
    printf("\nNhap vao cac so thuc a1, b1, c1, a2, b2, c2: ");
    printf("\na1 = "); scanf("%f", &a1);
    printf("b1 = "); scanf("%f", &b1);
    printf("c1 = "); scanf("%f", &c1);
    printf("a2 = "); scanf("%f", &a2);
    printf("b2 = "); scanf("%f", &b2);
    printf("c2 = "); scanf("%f", &c2);
    float m = a1*b2 - a2*b1, n = b1*c2 - b2*c1, p = a1*c2 - a2*c1;
    if(m==0){
        if(n==0&&p==0) printf("He phuong trinh co vo so nghiem !");
        else printf("He phuong trinh vo nghiem !");
    }
    else{
        printf("He phuong trinh co hai nghiem: ");
        printf("\nx1 = %.2f", (-n)/m);
        printf("\nx2 = %.2f", p/m);
    }
    return 0;
}