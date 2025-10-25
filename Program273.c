#include <stdio.h>
float avg3(float a,float b,float c){ return (a+b+c)/3; }
int main(){ float a,b,c; scanf("%f%f%f",&a,&b,&c); printf("Average=%.2f", avg3(a,b,c)); }
