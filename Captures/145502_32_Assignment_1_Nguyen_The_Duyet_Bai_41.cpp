/*
   Program: Assignment 1 - Exercise 41
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(){
    printf("This is Assignment 1-Exercise 41");
    int n, tg, i, j, t=0;
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
        if(n<=0) printf("\nNhap lai n: ");
    }while(n<=0);
    float a[n];
    printf("\nNhap vao cac phan tu cua mang:\n");
    for(i=0; i<n; i++){
        printf("a[%d]: ", i+1);
        scanf("%f", a+i);
    }
    for(i=0; i<n-1; i++)
        if(a[i]>a[i+1]){
            printf("Mang vua nhap khong tang dan!");
            t++;
            break;
        }
    if(t){
        printf("\nMang chua sap xep la: ");
        for(i=0; i<n; i++) printf("\n%.2f", a[i]);
        for(i=0; i<n-1; i++)
           for(j=i+1; j<n; j++)
              if(a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
              }
        printf("\nMang sau khi sap xep la: ");
        for(i=0; i<n; i++) printf("\n%.2f", a[i]);
    }
    else printf("\nmang vua nhap la mang tang dan!");
    return 0;
}
