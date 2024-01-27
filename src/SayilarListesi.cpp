
#include "SayilarListesi.hpp"

SayilarListesi::SayilarListesi(){
		dugumHead=nullptr;
	}
void SayilarListesi::tersCevirSayilarListesi(){
		Dugum*temp1=dugumHead;
		while(temp1!=nullptr){
			temp1->sayiBaslangic->tersCevir();
			temp1=temp1->dugumNext;
		}
	}
void SayilarListesi::dugumEkle(int sayi){
		if(dugumHead==nullptr) 
		{	
			dugumHead=new Dugum(sayi);
			sonEklenenDugum=dugumHead;
		}
		else
		{
			Dugum*eklenecekDugum=new Dugum(sayi);
			sonEklenenDugum->dugumNext=eklenecekDugum;
			sonEklenenDugum=eklenecekDugum;
		}
	}
void SayilarListesi::enBuyukSil(){
		if(dugumHead==nullptr)
			cout<<"Liste Bos"<<endl;
		else{
			Dugum*temp1=dugumHead;
			Dugum*temp2=dugumHead->dugumNext;
			Dugum*onceki1=dugumHead;
			Dugum*onceki2=dugumHead;
			while(temp2!=nullptr){
				if(temp1->deger<temp2->deger){
					temp1=temp2;
					onceki1=onceki2;
				}
				onceki2=onceki2->dugumNext;
				temp2=temp2->dugumNext;
			}
			onceki1->dugumNext=temp1->dugumNext;
			if(temp1==dugumHead){
				dugumHead=temp1->dugumNext;
				delete temp1;
			}else
				delete temp1;
		}
	}
void SayilarListesi::sayilarListesiYazdir(){
		Dugum*dd=dugumHead;
		Basamak*bb;
		string sayiString;
		if(dd==nullptr) 
			cout<<"Liste Bos"<<endl;
		else{
			while(dd!=nullptr){
			bb=dd->sayiBaslangic->head;
			sayiString=dd->sayiBaslangic->stringSayiGonder();
			cout<<"###############   ";
			while(bb!=nullptr){
				cout<<"******* ";
				bb=bb->basamakNext;
			}
			bb=dd->sayiBaslangic->head;
			cout<<endl<<"#  "<<setw(9)<<dd<<"  #   ";
			while(bb!=nullptr){
				cout<<"* "<<hex<<(reinterpret_cast<int>(bb))%4096<<" * ";
				bb=bb->basamakNext;
			}
			bb=dd->sayiBaslangic->head;
			cout<<endl<<"#~~~~~~~~~~~~~#   ";
			while(bb!=nullptr){
				cout<<"******* ";
				bb=bb->basamakNext;
			}
			bb=dd->sayiBaslangic->head;
			cout<<endl<<"# "<<setw(9)<<sayiString<<"   #   ";
			while(bb!=nullptr){
				cout<<"*  "<<bb->rakam<<"  * ";
				bb=bb->basamakNext;
			}
			bb=dd->sayiBaslangic->head;
			cout<<endl<<"###############   ";
			while(bb!=nullptr){
				cout<<"******* ";
				bb=bb->basamakNext;
			}
			cout<<endl<<endl;
			dd=dd->dugumNext;
			}
		}
	}
void SayilarListesi::tekSayi(){
		Dugum*dd=dugumHead;
		while(dd!=nullptr){
			dd->sayiBaslangic->tekSayiBasaAl();
			dd=dd->dugumNext;
		}
	}
SayilarListesi::~SayilarListesi(){
		Dugum*temp;
		while(dugumHead!=nullptr){
			temp=dugumHead;
			dugumHead=dugumHead->dugumNext;
			delete temp;
		}
	}