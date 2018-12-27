#include<iostream>
using namespace std;

struct Kisi
{
	char adi[30];
	int yas;
	float maas;
};


int main(){
	Kisi a;
	cout << "Adınızı giriniz: ";
	cin.get(a.adi, 30);
	cout << "Yasınızı giriniz ";
	cin >> a.yas;
	cout << "Maasinizi girin ";
	cin >>a.maas;
	
	cout << "\nBilgiler görüntüleniyor."<<endl;
	cout << "İsim: "<< a.adi << endl;
	cout << "Yas: " << a.yas << endl;
	cout << "Maas: "<< a.maas << endl; 
	
	return 0;
}
