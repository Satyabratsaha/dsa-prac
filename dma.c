#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    //*malloc
    int *ptr=(int *)malloc(n*sizeof(int));
    //*calloc
    // int *ptr=(int *)calloc(n, sizeof(int));
    //*realloc
    // int *ptr=(int *)malloc(sizeof(int));
    // ptr=(int *)realloc(ptr, n*sizeof(int));
    if(ptr==NULL){
        printf("memory not allocated");
        exit(1);
    }
    for(int i=0; i<=n; i++){
        printf("Enter integer: ");
        scanf("%d", ptr+i);
    }
    for(int i=0; i<=n; i++){
        printf("%d",*(ptr+i));
    }
    free(ptr);
    return 0;
}