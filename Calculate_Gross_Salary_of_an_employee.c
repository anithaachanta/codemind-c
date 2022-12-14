#include<stdio.h>
int main()
{
    float B,HRA,DA,PF;
    float GS;
    scanf("%f%f%f",&B,&HRA,&DA);
    PF=B*12/100;
    GS=B+HRA+DA+PF;
    printf("%0.2f
%0.2f",PF,GS);
}