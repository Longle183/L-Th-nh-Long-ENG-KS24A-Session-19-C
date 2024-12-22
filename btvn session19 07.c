#include<stdio.h>
typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
}Student;
void displayStudents(Student students[],int currentLength){
    printf("\nDanh sach sinh vien:\n");
    for(int i = 0; i < currentLength; i++){
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id,students[i].name,students[i].age,students[i].phoneNumber);
    }
}
void deleteStudent(int id,Student students[],int *currentLength){
    int index=-1;
    for(int i=0;i<*currentLength;i++){
        if(students[i].id==id){
            index=i;
            break;
        }
    }
    if(index==-1){
        printf("\nSinh vien co ID %d khong ton tai.\n", id);
        return;
    }
    for(int i = index; i < *currentLength - 1; i++){
        students[i]=students[i+1];
    }
    (*currentLength)--;
    printf("\nDa xoa sinh vien co ID %d.\n",id);
}
int main() {
    Student students[5]={
        {1, "Le Thanh Long",18,"0868107131"},
        {2, "Tran Thi Binh",21,"0987654321"},
        {3, "Le Van Cuong",22,"0345678901"},
        {4, "Pham Thi Duong",23,"0765432109"},
        {5, "Hoang Van Thai",24,"0923987654"}
    };
    int currentLength = 5;
    displayStudents(students,currentLength);
    deleteStudent(3, students,&currentLength);
    displayStudents(students,currentLength);
    deleteStudent(10, students,&currentLength);
    displayStudents(students,currentLength);
    return 0;
}
