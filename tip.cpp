#include<iostream>
using namespace std;
int main(){
	int a=25;
	int b=a;
	int *c=&a;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"-----"<<endl;
	cout<<"&a"<<&a<<endl;
	cout<<"&b"<<&b<<endl;
	cout<<"&c"<<&c<<endl;
	cout<<"-----"<<endl;
}
