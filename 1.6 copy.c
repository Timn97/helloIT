#include<stdio.h>
#include<math.h>
double giaithua(int);
double F2(int);
int main(){
    int n=2;
    printf("tong 1+2!.0/(1+2)+...+n!.0/(1+2+...+n!)= %.2lf",F2(2));
    return 0;
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
