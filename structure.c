#include<stdio.h>
//*structure members as arguments
// struct student{
//     char name[50];
//     int age;
//     int roll_num;
//     float mark;
// };
// void print(char name[]/*c has no string, it just takes an array of chars*/, int age, int roll, float mark){
//     printf("%s,%d,%d,%.2f\n", name, age, roll, mark);
       //.2f, .2 means precision till 2 points
// }
// int main(){
//     struct student s1={"satya", 20, 12, 100.0};
//     print(s1.name, s1.age, s1.roll_num, s1.mark);
//     return 0;
// }
//*call by reference
// struct charset{
//     char s;
//     int i;
// };
// void keyvalue(char* s, int* i){
//     scanf("%c, %d", s, i);
// }
// int main(){
//     int j;
//     struct charset cs;
//     keyvalue(&cs.s, &cs.i);
//     printf("%c, %d", cs.s, cs.i);
//     return 0;
// }