#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

void method1(){
	vector <int> v{-1,-2,-3,-4,3,2,1};
	auto multi = accumulate(begin(v),end(v),1,multiplies<double>());
	cout <<multi;
	cout <<endl;
}
void method2(){
	vector <int> v{-1,-2,-3,-4,3,2,1};
	double multi{1};
	for (int i{1};i<v.size();i++){
		multi *= v.at(i);
	}
	cout << multi;
}
int main(){
	method1();
	method2();
}