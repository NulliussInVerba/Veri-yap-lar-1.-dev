
#ifndef SAYI_HPP
#define SAYI_HPP
#include "Basamak.hpp"
#include <iostream>
#include <string> 

using namespace std;
class Sayi{
public:
	Basamak*head;
	int sayac;
	Sayi(int sayi);//SAYI DEGERINI RAKAM RAKAM NEW BASAMAK İLE Basamak SINIFINA ATADIM HEAD KISMINI TUTTUM
	void tersCevir();//KENDI KURDUGUM ALGORITMA ILE BASAMAKLARI TERS CEVIRDIM
	void tekSayiBasaAl();//KENDI KURDUGUM ALGORITMA ILE TEEK SAYILARI BASA ALDIM
	string stringSayiGonder();//TERS CEVRILINCE OLUSAN SAYIYI STRINGE CEVIRDIM VE BUNU SayilarListesi SINIFINDAKİ sayilarListesiYazdir() METODUNDA KULLANDIM
	~Sayi();
};
#endif