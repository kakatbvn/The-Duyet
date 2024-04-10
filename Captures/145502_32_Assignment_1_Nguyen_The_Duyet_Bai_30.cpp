/*
   Program: Assignment 1 - Exercise 30
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 30");
    int n, c=0;
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
        if(n<0) printf("\nNhap lai so nguyen duong n !");
    }while(n<0);
    if(n==1){
        printf("1 khong phai so nguyen to !");
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0){
            c=1; break;
        }
    if(c) printf("%d khong la so nguyen to !", n);
    else printf("%d la so nguyen to", n);
    return 0;
}