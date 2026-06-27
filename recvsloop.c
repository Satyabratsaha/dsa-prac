#include<stdio.h>
int Tail(int x){
  if(x <= 1){
    return x;
  }else{
    printf("%d", x);
    Tail(x-1);
  }
}
int main(){
  
}