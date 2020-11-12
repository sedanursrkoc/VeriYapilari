/**
* @file  Dosya.cpp
* @description Dosya ile ilgili metotları çalıştırıyor. 
* @course  1.Öğretim C Grubu
* @assignment  2.Ödev
* @date  22.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#include <iostream>
#include <fstream>
#include <sstream>
#include "Dugum.hpp"
#include "Dosya.hpp"

using namespace std;

	void Dosya::DosyaOku(){
		
		ifstream dosyaOku("icerik.txt");
		
		if (dosyaOku.is_open()) {
			while (getline(dosyaOku, metin)) {
				string s(metin);
				istringstream iss(s);
				while (iss >> sub)
				{
					dugum->DugumEkle(sub, 0);
				}
				dugum->DugumlerKontrol();
			}
			dosyaOku.close();
		}
	}
	
	void Dosya::DosyaYazdir(){
		dugum->DugumleriYazdir();
	}
	
	void Dosya::DugumSil(){
		dugum = NULL;
		delete dugum;
	}
	
	
	
	
	
	
	
	
	
	