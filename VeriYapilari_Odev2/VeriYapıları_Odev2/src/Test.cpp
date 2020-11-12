/**
* @file  Test.cpp
* @description Programı çalıtırıyor.
* @course  1.Öğretim C Grubu
* @assignment  2.Ödev
* @date  22.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#include <iostream>
#include "Dugum.hpp"
#include "Dosya.hpp"

using namespace std;

int main() 
{
	Dosya* dosya = new Dosya();
	dosya->DosyaOku();
	dosya->DosyaYazdir();
	dosya->DugumSil();
	
	delete dosya;
	
	return 0;
}