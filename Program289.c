#include <stdio.h>
float bmi(float w,float h){ return w/(h*h); }
int main(){ float w,h; scanf("%f%f",&w,&h); printf("BMI=%.2f", bmi(w,h)); }
