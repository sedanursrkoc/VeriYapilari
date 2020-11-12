/**
* @file  Top.hpp
* @description Top ile ilgili metotları tutuyor. 
* @course  Örgün-1C 
* @assignment  1.Ödev
* @date  01.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#ifndef TOP_HPP
#define TOP_HPP
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "KovaKontrol.hpp"
#include "Kova.hpp"

using namespace std;

class Top{
	private:
		char karakter = 45;
		char topKarakter = karakter;
	public:
		Top();
		char TopKarakterDondur();
};

#endif