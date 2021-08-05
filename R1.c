#include<stdio.h>
#include<math.h>
void convert();
int main(){
    convert();
    return 0;
}
void convert(){
    long long bin=0;
    int n=12;
    scanf("%d",&n);
    int n1=n;
    int rem,i=1;
    while(n!=0){
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i*=10;
    }
    printf("%d in decimal = %lld in binary",n1,bin);
}