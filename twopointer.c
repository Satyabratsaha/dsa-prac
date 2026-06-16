// opposite direction (collision)
// You are given a sorted array of integers nums and a target value target. 
// Find two numbers such that they add up to the target. Return their indices.
// #include<stdio.h>
// int main(){
//     int n=8;
//     int a[8]={1,3,5,6,7,8,9,10};
//     int target=15;
//     int left=0;
//     int right=n-1;
//     while(left<right){
//         if(a[left]+a[right]==target){
//             printf("%d, %d\n",left, right);
//             break;
//         }
//         else if(a[left]+a[right]>target){
//             right--;
//         }else{
//             left++;
//         }
//     }
// }



#include<stdio.h>
int main(){
    int height[9]={1,8,6,2,5,4,8,3,1};
    int n=9;
    int left=0;
    int right=n-1;
    int max_A=0;
    while(left<right){
        //ai
        int current_height=(height[left]<height[right])?height[left]:height[right];
        int width=right-left;
        int area=current_height*width;
        if(area>max_A){
            max_A=area;
        }
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }

        //me
        // if(height[left]<height[right]){
        //     int area=height[left]*(right-left);
        //     if(area>max_A){
        //         max_A=area;
        //     }
        // }
        // else{
        //     int area=height[right]*(right-left);
        //     if(area>max_A){
        //         max_A=area;
        //     }
        // }
        // if(height[left]<height[right]){
        //     left++;
        // }else{
        //     right--;
        // }
    }
    printf("%d", max_A);
}