/**
* @file  Dugum.hpp
* @description Dugum ile ilgili metotları tutuyor. 
* @course  1.Öğretim C Grubu
* @assignment  2.Ödev
* @date  22.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#ifndef DUGUM_HPP
#define DUGUM_HPP

using namespace std;

class Dugum{
	private:
		string data;
		Dugum *prev, *next;
		Dugum *head, *tail;
		int elemanSayisi;
		int sayac = 0;
		Dugum* tempKontrol;
		int byteKazanc = 0;
	public:
		Dugum();
		Dugum(string &data, int sayac,Dugum *next, Dugum *prev);
		void DugumEkle(string &data, int sayac);
		int DataKontrol(string &sub);
		void DugumlerKontrol();
		void DugumleriYazdir();
		~Dugum();
};


#endif