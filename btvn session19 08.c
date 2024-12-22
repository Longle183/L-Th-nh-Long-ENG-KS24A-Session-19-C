#include<stdio.h>
typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
}Student;
void sortStudentsByName(Student students[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if (strcmp(students[i].name, students[j].name)>0){
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
}
void printStudents(Student students[],int size){
    printf("%-5s %-20s %-5s %-15s\n", "ID","Name","Age","Phone Number");
    for(int i=0;i<size;i++){
        printf("%-5d %-20s %-5d %-15s\n",students[i].id,students[i].name,students[i].age,students[i].phoneNumber);
    }
}
int main(){
    Student students[5]={
        {1, "Le Thanh Long",18,"0868107131"},
        {2, "Tran Thi Binh",21,"0987654321"},
        {3, "Le Van Cuong",22,"0345678901"},
        {4, "Pham Thi Duong",23,"0765432109"},
        {5, "Hoang Van Thai",24,"0923987654"}
    };
    printf("Danh sách sinh viên tru?c khi s?p x?p:\n");
    printStudents(students, 5);
    sortStudentsByName(students, 5);
    printf("\nDanh sách sinh viên sau khi s?p x?p:\n");
    printStudents(students, 5);
    return 0;
}
