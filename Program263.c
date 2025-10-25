#include <stdio.h>
void convert(int days){
    printf("%d Weeks and %d Days", days/7, days%7);
}
int main(){ int d; scanf("%d",&d); convert(d); }
