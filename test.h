#include <stdio.h>

int thaink1(int i){
    if (i==0){
        return 0;
    }
    return i+i+3+calc(--i);
}

int think2(int i){
    return i+(i+3))*i;
}

int main () {
    int r1= think1(8);// 96
    int r2= think2(8);// 96
    retutn 0;
}