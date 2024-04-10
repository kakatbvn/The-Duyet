/*
   Program: Assignment 1 - Exercise 40
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 40");
    //1, 2.
    int m, i, sum=0;
    do{
        printf("\nNhap vao so nguyen duong m<=20: ");
        scanf("%d", &m);
        if(m<=0||m>20) printf("\nNhap lai m");
    }while(m<=0||m>20);
    printf("Nhap vao cac phan tu cua mang: ");
    float a[m];
    for(i=0; i<m; i++){
        do{
            printf("\na[%d] = ", i);
            scanf("%f", a+i);
            if(a[i]<0) printf("\nNhap lai a[%d]", i);
        }while(a[i]<0);
    }
    //3, 4.
    for(i=0; i<m; i++){
        printf("%.2f ", a[i]);
        sum+=a[i];
    }
    //5.
    for(i=0; i<m; i++) if(a[i]>=(sum/m)) printf("\n%.2f ", a[i]);
    return 0;
}