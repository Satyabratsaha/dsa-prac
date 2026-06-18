// #include<stdio.h>
// int main(){
//     int a[]={3,8,2,5,7,6,12};; 
//     int k = 4;
//     int len=sizeof(a)/sizeof(a[0]);

//     int sum=0;
//     for(int i=0; i<k; i++){
//         sum+=a[i];
//     }

//     int maxx=sum;
//     for(int i=1; i<=len-k; i++){
//         sum=sum-a[i-1]+a[i+k-1];
//         if(sum>maxx){
//             maxx=sum;
//         }
//     }
//     printf("%d", maxx);
// }
// Given an array of positive integers a and a target value k, 
// find the length of the longest contiguous subarray whose sum is less than or equal to k.
#include<stdio.h>
int main(){
    // int a[] = {3, 1, 2, 1, 1, 0, 6}; //4
    int a[] = {1, 1, 3, 4}; //2
//     // int a[] = {1, 3, 3}; //2
//     // int a[] = {1, 1, 1, 3}; //3
    int len=sizeof(a)/sizeof(a[0]);
    int k = 4;
    int sum=0;
    int max_sub=0;
    int j=0;
    for(int i=j; i<len; i++){
        sum+=a[i];
        int temp_sub=0;
        if(sum>k){
            temp_sub=i-j-1;
            sum=0;
            j++;
        }
        if(temp_sub>max_sub){
            max_sub=temp_sub;
        }
    }
    printf("%d", max_sub);
}

// #include <stdio.h>

// int main() {
//     // int a[] = {3, 1, 2, 1, 1, 0, 6}; //4
//     // int a[] = {1, 1, 3, 4}; //2
//     // int a[] = {1, 3, 3}; //2
//     // int a[] = {1, 1, 1, 3}; //3
//     int len = sizeof(a) / sizeof(a[0]);
//     int k = 4;
    
//     int sum = 0;
//     int max_sub = 0;
//     int j = 0; // The left boundary of your window

//     // i is the right boundary, expanding the window
//     for (int i = 0; i < len; i++) {
//         sum += a[i]; // Bring the new element into the window

//         // While the window is broken (sum > k), shrink it from the left
//         // by sliding j forward and subtracting the element leaving the window
//         while (sum > k) {
//             sum -= a[j]; 
//             j++; 
//         }

//         // At this point, the window is guaranteed to be valid.
//         // Calculate its current length: (right_index - left_index + 1)
//         int current_window_length = i - j + 1;
        
//         // Track the maximum length seen so far
//         if (current_window_length > max_sub) {
//             max_sub = current_window_length;
//         }
//     }

//     printf("Longest subarray length: %d\n", max_sub);
//     return 0;
// }