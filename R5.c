#include <math.h>
#include <stdio.h>
float calculate_EMI(float p, float r, float t){
float emi;
r = r / (12 * 100);
t = t * 12;
emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
return (emi);
}
int main(){
float principle, rate, time1, emi;
scanf("%f%f%f",&principle,&rate,&time1);
emi = calculate_EMI(principle, rate, time1);
printf("Monthly EMI is= %.3f", emi);
return 0;
}
