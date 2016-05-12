#include <iostream>
#include <string>
using namespace std;

class Sample{
	private:
		int test;
	public:
		Sample();
		Sample(int);
		void say_hello();
		~Sample();
};

Sample::Sample(){
	cout<< "Simple Constructor called"<<endl;
	test = 0;
	cout<<"Test value :"<<test<<endl;
}

Sample::Sample(int _test){
	cout<< "Int Constructor called"<<endl;
	test = _test;
	cout<<"Test value :"<<test<<endl;
}

void Sample::say_hello(){
	cout<<"Say Hello"<< endl;
}

Sample::~Sample(){
	cout<<"Destuctor called"<<endl;
}

int main() {
	Sample s1;
	s1.say_hello();
	Sample *s2 = new Sample();
	s2->say_hello();

	Sample *s3 = new Sample(45);
	s3->say_hello();
	return 0;
	}