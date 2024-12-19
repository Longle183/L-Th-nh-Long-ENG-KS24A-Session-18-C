#include<stdio.h>
struct SinhVien{
	char fullName[50];
	char age[5];
	char phoneNumber[10];
};
int main(){
	struct SinhVien std1;
	printf("Moi ban nhap ho va ten: ");
	fgets(std1.fullName,sizeof(std1.fullName),stdin);
	printf("Moi ban nhap tuoi: ");
	fgets(std1.age,sizeof(std1.age),stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(std1.phoneNumber,sizeof(std1.phoneNumber),stdin);
	printf("Ho va ten sinh vien: %s",std1.fullName);
	printf("Tuoi: %s",std1.age);
	printf("So dien thoai: %s",std1.phoneNumber);
	return 0;
}
