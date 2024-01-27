

#include "Sayi.hpp"

Sayi::Sayi(int sayi){
		sayac=0;
		head=new Basamak(sayi%10);
		sayi=sayi/10;
		sayac++;
		Basamak*a;
		Basamak*b;
		if(sayi!=0){
			b=new Basamak(sayi%10);
			sayac++;
			sayi=sayi/10;
			head->basamakNext=b;
		}
		
		while(sayi!=0){
			sayac++;
			a=new Basamak(sayi%10);
			sayi=sayi/10;
			b->basamakNext=a;
			b=b->basamakNext;
		}
		tersCevir();
	}
void Sayi::tersCevir(){
		if(sayac==2){
			Basamak*temp1=head->basamakNext;
			head->basamakNext=nullptr;
			temp1->basamakNext=head;
			head=temp1;
		}
		if(sayac>2){
			Basamak*temp1=head;
			Basamak*temp2=temp1->basamakNext;
			Basamak*temp3=temp2->basamakNext;
			temp1->basamakNext=nullptr;
			while(temp3!=nullptr){
				temp2->basamakNext=temp1;
				temp1=temp2;
				temp2=temp3;
				temp3=temp3->basamakNext;
			}
			temp2->basamakNext=temp1;
			head=temp2;
		}
	}
void Sayi::tekSayiBasaAl(){
		Basamak*temp1=head;
		Basamak*temp2=head->basamakNext;
		Basamak*headYedek;
		while(temp1!=nullptr&&temp2!=nullptr){
			if(temp2->rakam%2==1){
				headYedek=this->head;
				temp1->basamakNext=temp2->basamakNext;
				this->head=temp2;
				temp2->basamakNext=headYedek;
				temp2=temp1->basamakNext;
			}else{
				temp1=temp2;
				temp2=temp2->basamakNext;
			}
			
		}
	}
string Sayi::stringSayiGonder(){
		Basamak*temp=head;
		string sayiString="";
		while(temp!=nullptr){
			sayiString=sayiString+to_string(temp->rakam);
			temp=temp->basamakNext;
		}
		return sayiString;
	}
Sayi::~Sayi(){
		Basamak*temp;
		while(head!=nullptr){
			temp=head;
			head=head->basamakNext;
			delete temp;
		}
	}