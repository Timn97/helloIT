#include<stdio.h>
float T4(int);
int main(){
    int n =10;
    printf("tong 1+1/2...1/10 = %f", T4(10));
    return 0;
}
float T4(int n){
    float tong = 10, t=0;
    for (int i = 1; i <= n; i++)
    t =t+i;
    tong = tong + (float)1/t;
    return tong;
}
//
