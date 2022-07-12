#include<stdio.h>
#include<math.h>
double F1(int);
int main(){
    int n=1;
    printf("tong 1 + 2^2/pow(2,1/2)....10^10/pow(10,1/10)=%.2lf\n", F1(1));
    return 0;
}
double F1(int n){
    int tong = 0 ;
    for (int i = 0; i <= n; i++)
    tong = tong + pow(i,i)/pow(i,1/i);
    return tong;
}