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



// #include<stdio.h>
// int main(){
//     int height[9]={1,8,6,2,5,4,8,3,1};
//     int n=9;
//     int left=0;
//     int right=n-1;
//     int max_A=0;
//     while(left<right){
//         //ai
//         int current_height=(height[left]<height[right])?height[left]:height[right];
//         int width=right-left;
//         int area=current_height*width;
//         if(area>max_A){
//             max_A=area;
//         }
//         if(height[left]<height[right]){
//             left++;
//         }else{
//             right--;
//         }

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
//     }
//     printf("%d", max_A);
// }

// subset of 4 with highest sum
// #include<stdio.h>
// int main(){
//     int a[]={3,8,2,5,7,6,12};
//     int w=4;// size of the sub array
//     int len=sizeof(a)/sizeof(a[0]);// 7
    // int max_sum=0;
    // brute force way
    // for(int i=0; i<=len-w; i++){
    //     int sum=0;
    //     for(int j=i; j<=i+w-1; j++){
    //         sum+=a[j];
    //     }
    //     if(sum>max_sum){
    //         max_sum=sum;
    //     }
    // }
    // printf("%d\n", max_sum);

    // sliding window
//     int sum=0;
//     for(int i=0; i<=w-1; i++){
//         sum+=a[i];
//     }
//     int max_sum=sum;
//     for(int i=1; i<=len-w; i++){
//         sum=sum+a[i+w-1]-a[i-1];
//         if(sum>max_sum){
//             max_sum=sum;
//         }
//     }
//     printf("%d", max_sum);
// } 

// removing duplicate elements
// (i)making another array and copying elements
// #include<stdio.h>
// int main(){
//     int arr[]={5,5,7,8,8,9,9,10,10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int n_arr[]={arr[0]};
//     int x=0;
//     for(int i=1; i<n; i++){
//         if(n_arr[x]!=arr[i]){
//             x++;
//             n_arr[x]=arr[i];
//         }
//     }
//     for(int i=0; i<=x; i++){
//         printf("%d, ", n_arr[i]);
//     }
// }

// (ii) iterating in the sae arr
// #include<stdio.h>
// int main(){
//     int arr[]={5,5,7,8,8,9,9,10,10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=0;
//     for(int i=1; i<n; i++){
//         if(arr[x]!=arr[i]){
//             x++;
//             arr[x]=arr[i];
//         }
//     }
//     for(int i=0; i<=x; i++){
//          printf("%d, ", arr[i]);
//     }
// }