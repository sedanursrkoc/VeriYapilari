/**
* @file  KovaKontrol.hpp
* @description Kovayı kontrol ile ilgili metotları tutuyor. 
* @course  Örgün-1C 
* @assignment  1.Ödev
* @date  01.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#ifndef KOVAKONTROL_HPP
#define KOVAKONTROL_HPP
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "Kova.hpp"
#include "Top.hpp"

using namespace std;

class KovaKontrol{
	public:
		KovaKontrol();
		bool DoluMu(KovaKontrol* adres);
};

#endif