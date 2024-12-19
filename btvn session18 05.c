#include<stdio.h>
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
    int idToSearch;
    int found=0;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d",&idToSearch);
    for(int i=0;i<5;i++){
        if (sinhVienArray[i].id == idToSearch) {
            found = 1;
            printf("Sinh vien tim thay: \n");
            printf("ID: %d\n", sinhVienArray[i].id);
            printf("Ten: %s\n", sinhVienArray[i].name);
            printf("Tuoi: %d\n", sinhVienArray[i].age);
            printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
            printf("\nNhap ten moi: ");
            fflush(stdin);
            fgets(sinhVienArray[i].name,sizeof(sinhVienArray[i].name),stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhVienArray[i].age);
            printf("Thong tin sinh vien sau khi sua:\n");
            printf("ID: %d\n", sinhVienArray[i].id);
            printf("Ten: %s\n", sinhVienArray[i].name);
            printf("Tuoi: %d\n", sinhVienArray[i].age);
            printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
            break;
        }
    }
    if (!found){
        printf("Khong tim thay sinh vien voi ID = %d\n", idToSearch);
    }
    printf("\nDanh sach sinh vien sau khi sua:\n");
    for(int i=0;i<5;i++) {
        printf("ID: %d\n", sinhVienArray[i].id);
        printf("Ten: %s\n", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
    }
    return 0;
}
