#include <stdio.h>
struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main(){
    struct SinhVien sinhVienArray[50]={
        {1, "Le Thanh Long",18,"0868107131"},
        {2, "Phung Van Vuong",18,"0123456790"},
        {3, "Bui Minh Vu",18,"0123456801"},
        {4, "Ha Phuc Hung",18,"0123456812"},
        {5, "Le Hoang Xuan Vinh",18,"0123456823"}
    };
    int currentSize=5;
    struct SinhVien newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    newStudent.id = currentSize + 1;
    printf("Ten: ");
    fflush(stdin);
    fgets(newStudent.name,sizeof(newStudent.name),stdin);
    printf("Tuoi: ");
    scanf("%d", &newStudent.age);
    printf("So dien thoai: ");
    fflush(stdin);
    fgets(newStudent.phoneNumber,sizeof(newStudent.phoneNumber),stdin);
    sinhVienArray[currentSize] = newStudent;
    currentSize++;
    printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i=0;i<currentSize;i++){
        printf("ID: %d\n",sinhVienArray[i].id);
        printf("Ten: %s\n",sinhVienArray[i].name);
        printf("Tuoi: %d\n",sinhVienArray[i].age);
        printf("So dien thoai: %s\n",sinhVienArray[i].phoneNumber);
    }
    return 0;
}
