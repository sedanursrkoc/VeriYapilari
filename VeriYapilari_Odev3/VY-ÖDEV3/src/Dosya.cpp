#include <iostream>
#include <fstream>
#include <sstream>
#include "BST.hpp"
#include "Dosya.hpp"

using namespace std;

	void Dosya::BenimDosyaOku(){
		
		ifstream dosyaOku("benim.txt");
		
		if (dosyaOku.is_open()) {
			while (getline(dosyaOku, metin)) {
				string s(metin);
				istringstream iss(s);
				while (iss >> sub)
				{
					bstBenim->DugumEkle(bstBenim->kok, sub);
				}
				
			}
			dosyaOku.close();
		}
	}
	
	void Dosya::RakipDosyaOku(){
		
		ifstream dosyaOku("rakip.txt");
		
		if (dosyaOku.is_open()) {
			while (getline(dosyaOku, metin)) {
				string s(metin);
				istringstream iss(s);
				while (iss >> sub)
				{
					bstRakip->DugumEkle(bstRakip->kok, sub);
				}
				
			}
			dosyaOku.close();
		}
	}
	
	
	void Dosya::SkorKontrol(){
		
		
		if(bstBenim->SoySayisiDondur() < bstRakip->SoySayisiDondur())
		{
			benimSkor++;
			cout<<"-- TEBRIKLER TURU KAZANDINIZ --"<<endl<<endl;
			cout<<"SKOR"<<endl<<"Benim : "<<benimSkor<<endl;
			cout<<"Rakip : "<<rakipSkor<<endl;
			string tempxx = "";
			tempxx = bstRakip->DugumSil(bstRakip->kok, bstRakip->EnBuyukDondur()); 
			bstRakip->DugumEkle(bstRakip->kok,bstBenim->kok->veri);
			bstBenim->YerDegistir(bstBenim->kok->sol, tempxx);
			
			//bstBenim->CocugunSaginaEkle(bstBenim->kok->sol, temp);cout<<">>>> 4 <<<<<"<<endl;
			
			bstRakip->SoySayisiSifirla();
			
		}
		else if(bstBenim->SoySayisiDondur() > bstRakip->SoySayisiDondur())
		{
			rakipSkor++;
			cout<<"-- KAYBETTINIZ --"<<endl<<endl;
			cout<<"SKOR"<<endl<<"Benim : "<<benimSkor<<endl;
			cout<<"Rakip : "<<rakipSkor<<endl;
		}
		else{
			BST *temp = bstBenim->kok;
			bstBenim->kok = bstRakip->kok;
			bstRakip->kok = temp;

		}
		
		turSayisi++;
	}
	
	void Dosya::DosyaYazdir()
	{
		cout<<"Benim Agac Postorder: "<<endl; cout<<bstBenim->kok->seviye; 
		bstBenim->SeviyeYazdir(bstBenim->kok, bstBenim->kok->seviye);
		cout<<endl<<"Benim Agac Toplam Soy Sayisi: " << bstBenim->SoySayisiDondur()<<endl;
		bstBenim->EnBuyukDondur();
		
		cout<<"Rakip Agac Postorder: "<<endl; 
		bstRakip->SeviyeYazdir(bstRakip->kok, bstRakip->kok->seviye);
		cout<<endl<<"Rakip Agac Toplam Soy Sayisi: " << bstRakip->SoySayisiDondur()<<endl;
		bstRakip->EnBuyukDondur(); }
	
	bool Dosya::TurKontrol(){
		if(turSayisi == 20 || benimSkor == 5 || rakipSkor == 5) return false;
		return true;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	