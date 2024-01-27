

#include "SayilarListesi.hpp"
#include <fstream>

int main(){
	system("CLS");
	//SAYILARLISTESI OLUSTUR
	SayilarListesi*sayilarListesi=new SayilarListesi();
	//DOSYA OKUMA ISLEMLERI
	ifstream sayilarDosyasi("./src/sayilar.txt");
	int sayi;
	if(sayilarDosyasi.is_open()){
		while(sayilarDosyasi>>sayi){
			sayilarListesi->dugumEkle(sayi);
		}
		sayilarDosyasi.close();
	}else
		cout<<"Dosya acilamadi"<<endl;
	//MENU
	int menuSecim;
	do{	
		cout<<endl;
		cout<<"-*-*-*-*-MENU-*-*-*-*-"<<endl<<endl<<endl;
		cout<<"1-Sayilari yazdir"<<endl;
		cout<<"2-Sayilari ters cevir"<<endl;
		cout<<"3-En buyuk sayiyi sil"<<endl;
		cout<<"4-Tek basamaklari basa al"<<endl;
		cout<<"5-Cikis"<<endl;
		cin>>menuSecim;
		switch(menuSecim){
			case 1:
				sayilarListesi->sayilarListesiYazdir();
				break;
			case 2:
				sayilarListesi->tersCevirSayilarListesi();
				sayilarListesi->sayilarListesiYazdir();
				break;
			case 3:
				sayilarListesi->enBuyukSil();
				sayilarListesi->sayilarListesiYazdir();
				break;
			case 4:
				sayilarListesi->tekSayi();
				sayilarListesi->sayilarListesiYazdir();
				break;
			case 5:
				break;
			default:
				cout<<"XXXXXXXXXXXXX--YANLIS SECIM--XXXXXXXXXXXXX"<<endl;
		}
	}while(menuSecim!=5);
	delete sayilarListesi;
	return 0;
}