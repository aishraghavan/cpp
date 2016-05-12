#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int count_number_of_digits(double n){
	cout<<"d"<<n<<endl;
	//string text = Double.toString(Math.abs(d));
	string text = to_string(n);
	cout<<text;
	/*int integerPlaces = text.find('.');
	int decimalPlaces = text.length() - integerPlaces - 1;
	return decimalPlaces;*/
	return 0;
}

int main() {
    // Complete the code.

    double d = 3.14159265358979;
  
  	//cout<<d<<endl;
    //cout <<std::setprecision(30)<<d;
    cout<<count_number_of_digits(d)<<endl;
    return 0;
}


