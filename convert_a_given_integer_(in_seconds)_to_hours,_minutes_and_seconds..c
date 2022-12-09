#include<stdio.h>
int main()
{
    int sec,min,hr,rm;
    scanf("%d",&sec);
    hr=sec/3600;
    rm=sec%3600;
    min=rm/60;
    sec=rm%60;
    printf("H:M:S-%d:%d:%d",hr,min,sec);
}