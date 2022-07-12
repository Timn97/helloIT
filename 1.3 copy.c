#include<stdio.h>
int T3(int);
int main(){
printf("tong = %d",T3(10));
return 0;
}
int T3(int n){
    int tong=0;
    for (int i = 1; i <= n; i++)
        tong = tong + 1.0/1;
    return tong;
}
//
#include<stdio.h>
float T4(int);
int main(){
    int n =10;
	printf("Hello world2");
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