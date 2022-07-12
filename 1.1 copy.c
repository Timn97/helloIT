#include<stdio.h>
#include<math.h>
int T1(int);
int main(){
    int n=10;
    printf("tong tu 1+2+3....10=%d",T1(10));
    return 0;
}
int T1(int n){
    int tong=0;
    for (int i = 1; i <= n; i++)
        tong=tong +1;
    return tong;
}
