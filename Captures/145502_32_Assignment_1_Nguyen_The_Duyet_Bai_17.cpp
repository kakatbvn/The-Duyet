/*
   Program: Assignment 1 - Exercise 17
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
int main(void){
    printf("This is Assignment 1-Exercise 17");
    int cnt=0, i, n, a;
    for(i=1; i<10000; i++){
        n=i; a=n%10;
        if(i%3==0){
            while(a==1||a==2||a==3||a==4){
                n/=10;
                a=n%10;
            }
            if(n==0) cnt++;
        }
    }
    printf("\nTu 1 den 10000 co so so thoa man de bai la: %d", cnt);
    return 0;
}