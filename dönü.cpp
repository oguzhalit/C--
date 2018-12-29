#include<iostream>
using namespace std;
int main(){
	double x=99;
	int *p1,*p2;
	p1 = &x;
	p2 = p1;
	cout<<p1<<endl;
	cout<<*(double *)p2<<endl;
}
