#include <iostream>
#include <string>

using namespace std;

//namespace 는 이름의 모호성이 생길수 있으닌깐 이게 있으면 구별을 할 수 있다.

int n;

void set() {
	n = 10; //명시적 전역변수
}
namespace doodle {
	int n;
	void set() {
		n = 20;
		//doodle::n말고 n으로 사용하게 되면 결론:: 특정한 namespace 안에서 변수나 함수의 소속을 밝히지 않았을떄는 자신이 속한 스페이스 안에께 된다. 

	}
}
namespace google {
	int n;
	void set() {
		doodle::n = 30; // 이 n은 전역변수의 n이 되게 된다. 아무 namespace에 속해 있지 않은. 
	}
}
int main() {

	::set();
	doodle::set();
	google::set();

	cout << n << endl << doodle::n << endl << google::n << endl;

	system("pause");




}