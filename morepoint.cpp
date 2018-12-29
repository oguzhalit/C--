#include<iostream>
using namespace std;
int main(){
	int sayi[5];
	int *p;
	p=sayi; *p=5;
	p++;	*p=10;
	p = &sayi[2]; *p =15;
	p = sayi+3;   *p =20;
	p = sayi;     *(p+4) =25;
	for (int n=0; n<5;n++){
	cout<< sayi[n]<<",";
	}
}
