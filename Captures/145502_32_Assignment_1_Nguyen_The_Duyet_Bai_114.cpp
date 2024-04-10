/*
   Program: Assignment 1 - Exercise 114
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 114");
    printf("\nTat ca nhung co co 3 chu so ma no bang tong lap phuong ba chu so cua no la: ");
    for(int i=100; i<1000; i++){
        int sum=0, n=i;
        while(n>0){
            sum+=pow(n%10, 3);
            n/=10;
            if(n<10){
                sum+=n*n*n;
                break;
            }
        }
        if(sum==i) printf("\n%d", sum);
    }
    return 0;
}