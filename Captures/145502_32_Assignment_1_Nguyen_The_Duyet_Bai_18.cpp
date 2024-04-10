/*
   Program: Assignment 1 - Exercise 18
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(void){
    printf("This is Assignment 1-Exercise 18");
    int n;
    float sum=0;
    do{
        printf("\nNhap vao so dien tieu thu n: ");
        scanf("%d", &n);
        if(n<0) printf("\nNhap lai n !");
    }while(n<0);
    if(n<=100) sum+=n*1;
    else if(n<=200) sum = 100+(n-100)*1.4;
    else if(n<=400) sum = 100 + 100*1.4 + (n-200)*2;
    else sum = 100 + 100*1.4 + 200*2 + (n-400)*2.6;
    printf("\nSo tien dien phai tra trong thang la: %.2f USD", sum);
    return 0;
}