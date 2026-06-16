#include<stdio.h>
int main(){
    int A[4][5];
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("%p\n", (void*)&A[i][j]);
        }
    }
    return 0;
}