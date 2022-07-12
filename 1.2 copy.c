#include<stdio.h>
int T2(int);
int main(){
    int n=10;
    printf("tong = %d",T2(10));
    return 0;
}
int T2(int n){
    int tong =0;
    for (int i = 1; i <= n; i++)
    tong=tong -1;
    return tong;
    
}