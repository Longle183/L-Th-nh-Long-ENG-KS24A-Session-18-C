#include<stdio.h>
struct SinhVien{
	char fullName[50];
	char age[10];
	char phoneNumber[10];
};
int main(){
	struct SinhVien std1={"Le Thanh Long","18","0868107131"
	};
	printf("Ten sinh vien la: %s\n",std1.fullName);
	printf("Tuoi sinh vien la: %s\n",std1.age);
	printf("So dien thoai la: %s\n",std1.phoneNumber);
	return 0;
}
