#include <stdio.h>
void convertTime(int sec){
    printf("%d hr %d min %d sec", sec/3600, (sec%3600)/60, sec%60);
}
int main(){ int s; scanf("%d",&s); convertTime(s); }
