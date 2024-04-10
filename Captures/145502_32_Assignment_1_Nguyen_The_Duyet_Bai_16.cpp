/*
   Program: Assignment 1 - Exercise 16
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(void){
    printf("This is Assignment 1-Exercise 16");
    int n, i;
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
        if(n<0) printf("\nNhap lai n !");
    }while(n<0);
    int a[n+1];
    for(i=0; i<=n; i++){
        if(i==0||i==1) a[i]=1;
        else a[i]=a[i-2] + a[i-1];
    }
    for(i=0; i<n+1; i++)printf("\nF%d = %d", i, a[i]);
    return 0;
}