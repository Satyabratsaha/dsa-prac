#include<stdio.h>
int main(){
    int a[]={13,24,54,65,67,76,87,98, 100};
    int n=sizeof(a)/sizeof(a[0]);
    int target=24;
    int loc=-1;
    // for(int i=0; i<n; i++){
    //     if(a[i]==target){
    //         loc=i;
    //     }
    // }
    int B=0;
    int E=n-1;
    while(B<=E){
        int mid=(B+E)/2;
        if(a[mid]==target){
            loc=mid;
            break;
        }
        else if(a[mid]>target){
            E=mid-1;
        }
        else{
            B=mid+1;
        }
    }
    printf("location of the target is %d\n", loc);
}
