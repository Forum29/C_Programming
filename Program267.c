#include <stdio.h>
float areaTriangle(float b,float h){ return 0.5*b*h; }
int main(){ float b,h; scanf("%f%f",&b,&h); printf("Area = %.2f", areaTriangle(b,h)); }
