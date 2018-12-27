#include <iostream>
#include <string>
using namespace std;

struct urunler
{
	int kilo;
	double fiyat;

}elma, muz, limon;

int main(){
	string girdi;
	elma.fiyat=5;muz.fiyat=7;limon.fiyat=6;
	cout << "|-------------------------------|" << endl;
	cout << "|   Pazarda  bulunan  ürünler   |" << endl;
	cout << "|   |Elma|     |Muz|    |Limon| |" << endl;
	cout << "|   Ne almak istersiniz         |" << endl;
	cout << "|-------------------------------|" << endl;	
	cin >>girdi;
	if( girdi == "elma"){
		cout << "kac kilo alıcaksınız"<<endl;
		cin >>elma.kilo;
		cout << "Elma fiyatı ="<<elma.kilo*elma.fiyat<<endl; }
	else if( girdi == "muz"){
		cout << "kac kilo alıcaksınız"<<endl;
		cin >>muz.kilo;
		cout << "Muzun fiyatı ="<<muz.kilo*muz.fiyat<<endl; }	
	else 
		cout << "Malesef Kalmadı" <<endl;




}
