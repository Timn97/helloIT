#include<stdio.h>
#include<math.h>
int T1(int);
int T2(int);
int T3(int);
float T4(int);
double F1(int);
double giaithua(int);
double F2(int);
int main(){
    int n=10;
    printf("tong tu 1+2+3....10=%d\n",T1(10));
    printf("tong 1-2+3-4+...+(-)10= %d\n",T2(10));
    printf("tong 1+1/2+1/3...1/10 = %d\n",T3(10));
    printf("tong 1+1/2...1/10 = %f\n", T4(10));
    printf("tong 1 + 2^2/pow(2,1/2)....10^10/pow(10,1/10)=%.2lf\n", F1(10));
    printf("tong 1+2!.0/(1+2)+...+n!.0/(1+2+...+n!)= %.2lf\n",F2(10));
    return 0;
}
int T1(int n){
    int tong=0;
    for (int i = 1; i <= n; i++)
        tong=tong +1;
    return tong;
}

int T2(int n){
    int tong =0;
    for (int i = 1; i <= n; i++)
    tong=tong -1;
    return tong;  
}

int T3(int n){
    int tong=0;
    for (int i = 1; i <= n; i++)
        tong = tong + 1.0/1;
    return tong;
}

float T4(int n){
    float tong = 10, t=0;
    for (int i = 1; i <= n; i++)
    t =t+i;
    tong = tong + (float)1/t;
    return tong;
}

double F1(int n){
    int tong = 0 ;
    for (int i = 0; i <= n; i++)
    tong = tong + pow(i,i)/pow(i,1/i);
    return tong;
}

double giaithua(int n){
    int a=1;
    for (int i = 1; i <= n; i++){
        a=a*i;
    }
    return a;
}
double F2(int n){
    double a=0.0;
    int b=0;
    for (int i = 1; i <= n; i++){
    a = a + giaithua(i)/(b+i);
    b=b+i;
    }
    return a;
}