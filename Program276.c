#include <stdio.h>
float bill(float units){
    if(units<=100) return units*1.5;
    else if(units<=200) return 100*1.5+(units-100)*2;
    else return 100*1.5+100*2+(units-200)*3;
}
int main(){ float u; scanf("%f",&u); printf("Bill=%.2f", bill(u)); }
