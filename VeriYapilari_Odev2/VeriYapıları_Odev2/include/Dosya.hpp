/**
* @file  Dosya.hpp
* @description Dosya ile ilgili metotları tutuyor. 
* @course  1.Öğretim C Grubu
* @assignment  2.Ödev
* @date  22.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#ifndef DOSYA_HPP
#define DOSYA_HPP

#include "Dosya.hpp"


using namespace std;

class Dosya{
	private:
		string metin = "";
		string sub;
	public:
		void DosyaOku();
		void DosyaYazdir();
		
		Dugum *dugum = new Dugum();
		
		void DugumSil();
 
};

#endif