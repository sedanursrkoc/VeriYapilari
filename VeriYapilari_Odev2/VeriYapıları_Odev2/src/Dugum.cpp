/**
* @file  Dugum.cpp
* @description Dugum ile ilgili metotları çalıştırıyor. 
* @course  1.Öğretim C Grubu
* @assignment  2.Ödev
* @date  22.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#include <iostream>
#include "Dugum.hpp"
#include "Dosya.hpp"

using namespace std;

		Dugum::Dugum(){
			head = NULL; 
			tail = NULL;
			elemanSayisi = 0;
		}
	
		Dugum::Dugum(string &data, int sayac,Dugum *next, Dugum *prev){
			this->data = data;
			this->next = next;
			this->prev = prev;
			this->sayac = sayac;
		}

		void Dugum::DugumEkle(string &data, int sayac){
			if(head == NULL){
				Dugum *yeni = new Dugum(data , sayac, NULL, NULL);
				head = yeni;
				tail = yeni;
				tempKontrol = head;	
				yeni = NULL;
				delete yeni;
			}
			else{
				Dugum *yeni = new Dugum(data , sayac, NULL, NULL);
				tail->next = yeni;
				yeni->prev = tail;
				tail = yeni;
				yeni = NULL;
				delete yeni;
			}
		}

		int Dugum::DataKontrol(string &sub)
		{
			if(tempKontrol->data == sub)
			{
				return elemanSayisi - sayac - 1;
			}
			else
			{
				sayac++;
				if(!(elemanSayisi - 1 == sayac)){
					tempKontrol = tempKontrol->next;
					DataKontrol(sub);
				}
				else
					return 0;
			}
		}
		
		void Dugum::DugumlerKontrol(){
			Dugum* temp = head;
			while(!(temp == NULL))
			{
				elemanSayisi++;
				sayac = 0;
				temp->sayac = DataKontrol(temp->data);
				temp = temp->next;
				tempKontrol = head;
			}
			
			delete temp;
		}
		
		void Dugum::DugumleriYazdir(){
			Dugum* temp = head;
			
			cout << "NULL<-" << char(221);
			
			while(!(temp == NULL))
			{
				if(temp->sayac == 0)
					cout << temp->data << " - " << temp->sayac << char(221) << "<->" << char(221);
				else{
					byteKazanc += temp->data.length()-1;
					cout << " - " << temp->sayac << char(221) << "<->" << char(221);
				}
				temp = temp->next;
			}
			cout << "->NULL" << endl;
			
			cout << "Toplam Kazanc : " << byteKazanc << " Byte" << endl;
			
			while(!(temp == NULL))
			{
				temp = temp->next;
				delete temp->prev;
			}
			delete temp;
		}
		
		Dugum::~Dugum(){
			delete head;
			delete tail;
			delete prev;
			delete next;
			delete tempKontrol;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		