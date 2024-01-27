

#ifndef DUGUM_HPP
#define DUGUM_HPP
#include "Sayi.hpp"

class Dugum{
public:
	Sayi*sayiBaslangic;
	int deger;
	Dugum*dugumNext;
	Dugum(int deger);//new Sayi() ILE BELLEKTE ALAN ACTIM
	~Dugum();//Sayi ICIN OLUSTURDUGUM BELLEK ALANINI SILDIM
};
#endif