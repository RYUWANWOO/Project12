#include <iostream>
#include <string>

using namespace std;

//namespace �� �̸��� ��ȣ���� ����� �����ѱ� �̰� ������ ������ �� �� �ִ�.

int n;

void set() {
	n = 10; //����� ��������
}
namespace doodle {
	int n;
	void set() {
		n = 20;
		//doodle::n���� n���� ����ϰ� �Ǹ� ���:: Ư���� namespace �ȿ��� ������ �Լ��� �Ҽ��� ������ �ʾ������� �ڽ��� ���� �����̽� �ȿ��� �ȴ�. 

	}
}
namespace google {
	int n;
	void set() {
		doodle::n = 30; // �� n�� ���������� n�� �ǰ� �ȴ�. �ƹ� namespace�� ���� ���� ����. 
	}
}
int main() {

	::set();
	doodle::set();
	google::set();

	cout << n << endl << doodle::n << endl << google::n << endl;

	system("pause");




}