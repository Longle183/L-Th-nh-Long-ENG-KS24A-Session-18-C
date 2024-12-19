#include <stdio.h>
struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[15];
};
int main(){
    struct SinhVien sinhVienArray[5];
    for(int i= 0;i<5;i++){
        printf("Nhap thong tin cho sinh vien thu %d:\n",i+1);
        printf("Ho va ten: ");
        fflush(stdin); 
        fgets(sinhVienArray[i].name,sizeof(sinhVienArray[i].name),stdin);
        printf("Tuoi: ");
        scanf("%d",&sinhVienArray[i].age);
        getchar();
        printf("So dien thoai: ");
        fgets(sinhVienArray[i].phoneNumber,sizeof(sinhVienArray[i].phoneNumber),stdin);
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i=0;i<5;i++){
        printf("Sinh vien thu %d:\n",i+1);
        printf("Ho va ten: %s",sinhVienArray[i].name);
        printf("Tuoi: %d",sinhVienArray[i].age);
        printf("So dien thoai: %s",sinhVienArray[i].phoneNumber);
    }
    return 0;
}

