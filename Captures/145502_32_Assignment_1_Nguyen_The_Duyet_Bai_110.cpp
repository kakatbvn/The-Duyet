/*
   Program: Assignment 1 - Exercise 110
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(){
    printf("This is Assignment 1-Exercise 110");
    int d, m;
    do{
       printf("\nNhap vao ngay: ");
       scanf("%d", &d);
       if(d<0||d>31) printf("\nNhap lai ngay !");
    }while(d<0||d>31);
    do{
       printf("Nhap vao thang: ");
       scanf("%d", &m);
       if(m<0||m>12) printf("\nNhap lai thang !");
    }while(m<0||m>12);
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
            if(d==31){
                if(m==12) printf("Ngay tiep theo ngay sau la: 1/1");
                else printf("Ngay tiep theo ngay sau la: 1/%d", m+1);
            }
            else printf("Ngay tiep theo ngay sau la: %d/%d", d+1, m);
            break;
        }
        case 2:{
            while(d>28){
                printf("\nNhap lai ngay: ");
                scanf("%d", &d);
            }
            if(d==28) printf("Ngay tiep theo ngay sau la: 1/3");
            else printf("Ngay tiep theo ngay sau la: %d/2", d+1);
            break;
        }
        default :{
            while(d==31){
                printf("\nNhap lai ngay: ");
                scanf("%d", &d);
            }
            if(d==30) printf("Ngay tiep theo ngay sau la: 1/%d", m+1);
            else printf("Ngay tiep theo ngay sau la: %d/%d", d+1, m);
            break;
        }
    }return 0;
}