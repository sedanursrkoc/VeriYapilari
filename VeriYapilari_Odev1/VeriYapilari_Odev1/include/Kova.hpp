/**
* @file  Kova.hpp
* @description Kova ile ilgili metotları tutuyor. 
* @course  Örgün-1C 
* @assignment  1.Ödev
* @date  01.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#ifndef KOVA_HPP
#define KOVA_HPP
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "KovaKontrol.hpp"
#include "Top.hpp"


using namespace std;

class Kova{
	private:
		int n = 0; //renk ataması için değişken 
	public:	

		Kova();
		void KovaCiz();		
		void TopOlustur();
		void TopSil();
		void RenkEkle();
		
		Top* top = NULL;
		KovaKontrol* topKontrol = NULL;

};


#endif