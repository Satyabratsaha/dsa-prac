#include<stdio.h>
int main(){
    int n=8;
    int a[8]={25,16,83,10,35,48,20,50};
    int max_1=a[n-1];
    int max_2=a[n-2];
    for(int i=0; i<=n-2; i++){
        if(a[i]>max_1){
            max_2=max_1;
            max_1=a[i];
        }
        else if (a[i]>max_2){
            max_2=a[i];
        }
    } 
    printf("second largest is %d\n", max_2);
    printf("using the vim keybindings here");
}