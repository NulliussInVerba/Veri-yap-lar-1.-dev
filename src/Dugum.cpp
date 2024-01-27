

#include "Dugum.hpp"

Dugum::Dugum(int deger){
		dugumNext=nullptr;
		this->deger=deger;
		this->dugumNext=dugumNext;
		sayiBaslangic=new Sayi(deger);
	}
Dugum::~Dugum(){
		delete sayiBaslangic;
	}