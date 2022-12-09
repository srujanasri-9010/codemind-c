#include<stdio.h>
int main()
{
    int years,weeks,days;
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    printf("%d
",years);
    printf("%d
",weeks);
}