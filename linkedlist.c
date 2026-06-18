// #include <stdlib.h>
// #include<stdio.h>

// * Singly LinkedList
// # struct Node{
//     int data;
//     struct Node* ptr;
// };

// int main(){
    // head insertion
    // struct Node *head, *new_N;
    // head=NULL;
    // while(1){
    //     if(head==NULL){
    //         new_N=(struct Node*)malloc(sizeof(struct Node));
    //         printf("Enter data(or press q to exit): ");
    //         if(scanf("%d", &new_N->data)!=1){
    //             break;
    //         }
    //         new_N->ptr=NULL;
    //         head=new_N;
    //     }
    //     else{
    //         new_N=(struct Node*)malloc(sizeof(struct Node));
    //         printf("Enter data(or press q to exit): ");
    //         if(scanf("%d", &new_N->data)!=1){
    //             break;
    //         }
    //         new_N->ptr=head;
    //         head=new_N;
    //     }
    // }
    // //traversing
    // struct Node *temp;
    // temp = head;
    // while(temp != NULL){
    //     printf("%d ", temp->data);
    //     temp=temp->ptr;
    // }

// # tail insertion
//     struct Node *head, *new_N, *tail;
//     head=NULL;
//     tail=NULL;
//     while(1){
//         new_N=(struct Node*)malloc(sizeof(struct Node));
//         printf("Enter data(or press q to exit): ");
//         if(scanf("%d", &new_N->data)!=1){
//             break;
//         }
//         if(head==NULL){
//             new_N->ptr=NULL;
//             head=new_N;
//             tail=new_N;
//         }
//         else{
//             tail->ptr=new_N;
//             tail=new_N;
//         }
//     }
//     //traversing
//     struct Node *temp;
//     temp = head;
//     while(temp != NULL){
//         printf("%d ", temp->data);
//         temp=temp->ptr;
//     }
// }

// * Doubly LinkedList
// struct Node{
//     struct Node *ptr_1;
//     int data;
//     struct Node *ptr_2;
// };
// int main(){
// # head insertion
    // struct Node *head, *new_N;
    // head=NULL;
    // while(1){
    //     new_N=(struct Node*)malloc(sizeof(struct Node));
    //     printf("Enter data(or press q to exit) ");
    //     if(scanf("%d", &new_N->data) != 1){
    //         break;
    //     }
    //     if(head==NULL){
    //         new_N->ptr_1=NULL;
    //         new_N->ptr_2=NULL;
    //         head=new_N;
    //     }
    //     else{
    //         new_N->ptr_1=NULL;
    //         new_N->ptr_2=head;
    //         head->ptr_1=new_N;
    //         head=new_N;
    //     }
    // }
    // struct Node *temp;
    // temp=head;
    // while(temp!=NULL){
    //     printf("%d ", temp->data);
    //     temp=temp->ptr_2;
    // }

    // # tail insertion
//     struct Node *head, *new_N, *tail;
//     head=NULL;
//     tail=NULL;
//     while(1){
//         new_N=(struct Node*)malloc(sizeof(struct Node));
//         printf("Enter data(or press q to exit) ");
//         if(scanf("%d", &new_N->data) != 1){
//             break;
//         }
//         if(head==NULL){
//             new_N->ptr_1=NULL;
//             new_N->ptr_2=NULL;
//             head=new_N;
//             tail=new_N;
//         }
//         else{
//             new_N->ptr_1=tail;
//             new_N->ptr_2=NULL;
//             tail->ptr_2=new_N;
//             tail=new_N;
//         }
//     }
//     struct Node *temp;
//     temp=head;
//     while(temp!=NULL){
//         printf("%d ", temp->data);
//         temp=temp->ptr_2;
//     }
// }