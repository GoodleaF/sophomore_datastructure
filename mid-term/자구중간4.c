#include <stdio.h>
typedef int bool;
enum{false, true};

typedef struct {
	char name[10];//����� �̸��� �����Ѵ�
	int age;//����� ���̸� �����Ѵ�
	int salary;//����� �޿��� �����Ѵ�
	int dob;//����� ������ �����Ѵ�
}Employee;
bool Employee_equal(char* name1, char*name2) {//���� �̸��� �Է¹޾� �� ����� �̸�, ����, �޿�, ������ ������ ���Ѵ�
	int age1, age2, salary1, salary2, dob1, dob2;
	if (name1 == name2&&age1==age2&&salary1==salary2&&dob1==dob2) {
		return true;
	}
	else {
		return false;
	}
	
}
void Increase_salary(int salary) {//�޿��� ������Ų��
	salary += 50;
}
char Search_employee_by_birthday(int dob) {//������ �Է¹޾� ������ ���� ����� �̸��� ���Ѵ�
	if (Employee.dob == dob) {
		return Employee.name;
	}
}
void main() {
	
}