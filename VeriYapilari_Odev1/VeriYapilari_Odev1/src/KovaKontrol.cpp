/**
* @file  KovaKontrol.hpp
* @description Kovanın boş olup olmadığını kontrol ediyor. 
* @course  Örgün-1C 
* @assignment  1.Ödev
* @date  01.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "Kova.hpp"
#include "KovaKontrol.hpp"
#include "Top.hpp"

using namespace std;

		KovaKontrol::KovaKontrol(){
			
		}
		bool KovaKontrol::DoluMu(KovaKontrol* adres) { //Kovanın boş olup olmadığını kontrol ediyor. 
			if (adres == 0)
			{
				return true;
			}
			else
				return false;
		}
