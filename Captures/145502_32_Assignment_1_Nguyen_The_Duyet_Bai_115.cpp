/*
   Program: Assignment 1 - Exercise 115
   Purpose: Practice
   Author: Nguyen The Duyet - 20223938
   Date: 2004.01.28
*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("This is Assignment 1-Exercise 115");
    float xA, yA, xB, yB, xC, yC;
    printf("\nNhap vao toa do ba diem A, B, C: ");
    printf("\nxA = "), scanf("%f", &xA);
    printf("yA = "); scanf("%f", &yA);
    printf("xB = "); scanf("%f", &xB);
    printf("yB = "); scanf("%f", &yB);
    printf("xC = "); scanf("%f", &xC);
    printf("yC = "); scanf("%f", &yC);
    float AB=sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB)), BC=sqrt((xB-xC)*(xC-xB)+(yC-yB)*(yC-yB)), AC=sqrt((xA-xC)*(xA-xC)+(yA-yC)*(yA-yC));
    if(AB*AB==BC*BC+AC*AC||BC*BC==AB*AB+AC*AC||AC*AC==AB*AB+BC*BC) printf("Tam giac da cho la tam giac vuong !");
    else printf("Khong phai tam giac vuong !");
    return 0;
}