#include<iostream>
using namespace std;

void swap(int&,int&);

int main(){

int a=1,b=2;
cout<<"swapdan önce"<<endl;
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
swap(a,b);
cout <<"swapdan sonra"<<endl;
cout <<"a = "<< a <<endl;
cout <<"b = "<< b <<endl;
}
void swap(int& n1, int& n2){
	int bos;
	bos = n1;
	n1 = n2;
	n2 = bos;
}



