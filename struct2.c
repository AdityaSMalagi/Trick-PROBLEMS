#include<stdio.h>
struct student{
    char name[20];
    int age;
    int roll_no;
    float marks;
};
void print(char name[],int age,int roll_no,float marks){
    printf("%s\n %d\n %d\n %.2f\n",name,age,roll_no,marks);
}
int main(){
    struct student s1 = {"Nick",16,50,73.8};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
    return 0;
}