//สตั้5 ตฤ1
#include <iostream>
#include <cstdlib>
using namespace std;
class Student
{
public:
	void get_value()
	{
		cin >> num >> name >> sex;
	}
	void display()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;
	}
private:
	int num;
	char name[10];
	char sex;
};
class Student1 : public Student
{
public:
	void get_value_1()
	{
		get_value();
		cin >> age >> addr;
	}
	void display_1()
	{
		cout << "age:" << age << endl;
		cout << "address:" << addr << endl;
	}
private:
	int age;
	char addr[30];
};
int main()
{
	Student1 stdu1;
	stdu1.get_value_1();
	stdu1.display();
	stdu1.display_1();
	system("pause");
	return 0;
}

