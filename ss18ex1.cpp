#include<stdio.h> 

int main() {
	struct student{
		int age;
		char name[50];
		char phoneNumber[50]; 
	}; 
	struct student a1={18,"nguyenvanminh","090000008"};

	
	printf("tuoi cua sinh vien la %d\n",a1.age);
	printf("ho va ten : %s\n",a1.name);
	printf("so dien thoai la : %s \n",a1.phoneNumber);
	 
	
	return 0; 
	} 

