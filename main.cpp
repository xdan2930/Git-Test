#include<iostream>
using namespace std;

int sum(int, int);
int product(int, int);

int main(){
	cout << "Hello World" << endl;
	cout << sum(3, 4) << endl;
	cout << product(3, 4) << endl;
}

int sum(int a, int b){
	return a+b;
}

int product(int a, int b){
	return a*b;
}
