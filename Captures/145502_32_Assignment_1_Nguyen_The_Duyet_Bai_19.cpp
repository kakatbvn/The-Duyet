/*
   Program: Assignment 1 - Exercise 19
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(){
    printf("This is Assignment 1-Exercise 19");
    float a[3], tg;
    int i, j;
    printf("\nNhap vao ba so thuc a, b, c: ");
    printf("\n");
    for(i=0; i<3; i++) scanf("%f", a+i);
    for(i=0; i<2; i++)
       for(j=i+1; j<3; j++)
          if(a[i]>a[j]){
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
          }
    if(a[1]!=a[0]&&a[1]!=a[2]) printf("\nSo o giua la: %.2f", a[1]);
    else printf("Khong co so o giua !");
    return 0;
}
