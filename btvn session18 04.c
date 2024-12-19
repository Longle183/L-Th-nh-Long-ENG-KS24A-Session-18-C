#include <stdio.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sinhVienArray[50];
    int numberOfStudents=5;
    for(int i=0;i<numberOfStudents;i++){
        sinhVienArray[i].id=i+1;
        printf("Nhap thong tin cho sinh vien thu %d:\n",i+1);
        printf("Ten: ");
        fflush(stdin);
        fgets(sinhVienArray[i].name,sizeof(sinhVienArray[i].name),stdin);
        printf("Tuoi: ");
        scanf("%d", &sinhVienArray[i].age);
        getchar();
        printf("So dien thoai: ");
        fgets(sinhVienArray[i].phoneNumber,sizeof(sinhVienArray[i].phoneNumber),stdin);
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i=0;i<numberOfStudents;i++){
        printf("ID: %d\n",sinhVienArray[i].id);
        printf("Ten: %s\n",sinhVienArray[i].name);
        printf("Tuoi: %d\n",sinhVienArray[i].age);
        printf("So dien thoai: %s\n",sinhVienArray[i].phoneNumber);
    }
    return 0;
}
