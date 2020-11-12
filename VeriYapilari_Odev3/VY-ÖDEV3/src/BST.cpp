#include <iostream>
#include <fstream>
#include <sstream>
#include "BST.hpp"
#include "Dosya.hpp"

using namespace std;

	BST::BST(){
			kok = NULL; 
			sag = NULL;
			sol = NULL; 
			altDugum = NULL;
			kontrol	= "";	
			sayac = 0;
			veri = "";
			seviye = 0;
			toplamSoySayisi = 0;
			enBuyuk = 0;

		}
	
	BST::BST(string &veri,BST *sag, BST *sol, BST *altDugum, int sayac, int seviye, int seviyetemp){
			this->veri = veri;
			this->sag = sag;
			this->sol = sol;
			this->altDugum = altDugum;
			this->sayac = sayac;
			this->seviye = seviye;
			this->seviyetemp = seviyetemp;
		}
	
	
	void BST::DugumEkle(BST *dugum, string &Fveri){

			if(dugum == NULL)
			{
				kok = new BST(Fveri,NULL,NULL,NULL,0,0,0);
			}
			else if(stoi(dugum->veri) < stoi(Fveri))
			{
				if(enBuyuk < stoi(Fveri))
					enBuyuk = stoi(Fveri);

				dugum->sayac++;
				dugum->seviye++;
				dugum->seviyetemp++;

				if(dugum->sag) 
					return dugum->sag->DugumEkle(dugum->sag, Fveri);
				
				BST* yeni = new BST(Fveri,NULL,NULL,dugum,0,0,0);
				
				dugum->sag = yeni;
			}
			else   
			{
				dugum->sayac++;
				dugum->seviye++;
				dugum->seviyetemp++;
				if(dugum->sol) 
					return dugum->sol->DugumEkle(dugum->sol, Fveri);
				
				BST* yeni = new BST(Fveri,NULL,NULL,dugum,0,0,0);
				
				dugum->sol = yeni;
			}
			
		}
		
		void BST::SoySayisiArttir(int sayac){
			toplamSoySayisi += sayac;
		}
		
		int BST::SoySayisiDondur(){
			return toplamSoySayisi;
		}
		
		void BST::SoySayisiSifirla(){
			toplamSoySayisi = 0;
		}
		
		int BST::EnBuyukDondur(){
			return enBuyuk;
		}
		
		
		void BST::SeviyeYazdir(BST *Dugum, int seviye){ 
			if(Dugum == NULL) return;
			if(seviye <= 0){ 
				SoySayisiArttir(Dugum->sayac);
				cout<<"<"<<Dugum->veri<<","<<Dugum->sayac<<"> ";  Dugum->seviyetemp = Dugum->seviye;
				return;
			}
			else{
				
				if(enBuyuk <= stoi(Dugum->veri)){
					enBuyuk = stoi(Dugum->veri);
				}
				SeviyeYazdir(Dugum->sol, (Dugum->seviyetemp--)); 
				SeviyeYazdir(Dugum->sag, (Dugum->seviyetemp--));
				
				if(Dugum->seviyetemp <= 0){
					SoySayisiArttir(Dugum->sayac);
					cout<<"<"<<Dugum->veri<<","<<Dugum->sayac<<"> ";
				}  
				
				if(Dugum->altDugum != NULL){
				Dugum->altDugum->seviyetemp -= Dugum->sayac; }
			} 
		}
		
		void BST::YerDegistir(BST *Dugum, string veri){ 
					while(Dugum->sag != NULL){
						Dugum = Dugum->sag;
					}
					
					string temp = Dugum->veri;
					Dugum->veri = kok->veri;
					kok->veri = temp; kok->seviye = 9;
					Dugum->veri = veri; 
		}
		
		string BST::DugumSil(BST *Dugum, int deger){	silinecekDugum = Dugum;
			if(Dugum != NULL && stoi(Dugum->veri) == deger)
			{
				silinecekDugum = Dugum;
				
				if(Dugum->sag == NULL) {Dugum->altDugum->sag = Dugum->sol; kok->sayac--; return silinecekDugum->veri;}
				else if(Dugum->sol == NULL) {Dugum->altDugum->sol = Dugum->sag; kok->sayac--; return silinecekDugum->veri;}
				else
				{
					silinecekDugum = Dugum->sol;
					BST* ebeveynDugum = Dugum;
					while(silinecekDugum->sag != NULL){
						ebeveynDugum = silinecekDugum;
						silinecekDugum = silinecekDugum->sag;
					}
					Dugum->veri = silinecekDugum->veri;
					if(ebeveynDugum == Dugum) Dugum->sol = silinecekDugum->sol;
					else ebeveynDugum->sag = silinecekDugum->sol;
					 
				} cout<<silinecekDugum->veri<<endl;
				return silinecekDugum->veri;
				//delete silinecekDugum;
			}
			else { 
				if(Dugum == NULL || (Dugum->sag == NULL && Dugum->sol == NULL)) return " ";
				else{ 
					
						DugumSil(Dugum->sol, deger);

					DugumSil(Dugum->sag, deger); return silinecekDugum->veri;
				} 
			} 

			
				
		}
		
		
		
		
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		