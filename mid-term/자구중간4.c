#include <stdio.h>
typedef int bool;
enum{false, true};

typedef struct {
	char name[10];//사원의 이름을 저장한다
	int age;//사원의 나이를 저장한다
	int salary;//사원의 급여를 저장한다
	int dob;//사원의 생일을 저장한다
}Employee;
bool Employee_equal(char* name1, char*name2) {//비교할 이름을 입력받아 각 사원의 이름, 나이, 급여, 생일이 같은지 비교한다
	int age1, age2, salary1, salary2, dob1, dob2;
	if (name1 == name2&&age1==age2&&salary1==salary2&&dob1==dob2) {
		return true;
	}
	else {
		return false;
	}
	
}
void Increase_salary(int salary) {//급여를 증가시킨다
	salary += 50;
}
char Search_employee_by_birthday(int dob) {//생일을 입력받아 생일을 토대로 사원의 이름을 구한다
	if (Employee.dob == dob) {
		return Employee.name;
	}
}
void main() {
	
}