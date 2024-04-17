#include <iostream>
using namespace std;

main(){
	cout<<"## Program cek tahun kabisat ##\n";
	cout<<"===============================#\n";
	
	int tahun;
	
	cout<<"Input Tahun: ";
	cin>>tahun;
	
	if(tahun%400==0){
		cout<<tahun<<" Adalah Tahun Kabisat\n";
	} else if(tahun%100==0){
		cout<<tahun<<" Bukan Tahun Kabisat\n";
	} else if(tahun%4==0){
		cout<<tahun<<" Adalah Tahun Kabisat\n";
	} else{
		cout<<tahun<<" Bukan Tahun Kabisat\n";
	}
	
}