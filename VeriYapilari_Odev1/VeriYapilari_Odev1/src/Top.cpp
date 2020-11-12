/**
* @file  Top.cpp
* @description Top ile ilgili metotları çalıştırıyor. 
* @course  Örgün-1C 
* @assignment  1.Ödev
* @date  01.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "Kova.hpp"
#include "KovaKontrol.hpp"
#include "Top.hpp"

using namespace std;

		
		Top::Top(){ //Topa rastgele değer atama
			topKarakter = char(rand() % 25 + 65);	
		}
		
		char Top::TopKarakterDondur(){ //topKarakter private olduğundan ulaşmak için fonksiyon
			return topKarakter;
		}
	
