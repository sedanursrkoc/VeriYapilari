/**
* @file  Kova.cpp
* @description Kova ile ilgili metotları çalıştırıyor. 
* @course  Örgün-1C 
* @assignment  1.Ödev
* @date  01.11.2019
* @author  Sedanur Sarıkoç(sedanur.sarikoc@ogr.sakarya.edu.tr), Merve Sarı(merve.sari3@ogr.sakarya.edu.tr)
*/ 
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include "Kova.hpp"
#include "Top.hpp"
#include "KovaKontrol.hpp"


using namespace std;

		Kova::Kova() {	//Renk değerini random olarak atama
			n = rand() % 15 + 1;
		}
		
		void Kova::TopOlustur() { //Top olup olmadığını kontrol etmek için fonksiyon. Eğer top yoksa yeni top oluştur.
			if(topKontrol->KovaKontrol::DoluMu(topKontrol))
				top = new Top();
				topKontrol = new KovaKontrol();
		}

		void Kova::TopSil(){ //Top silmek için fonksiyon
			top = NULL;
			topKontrol = NULL;
			delete top;
			delete topKontrol;
		}
		
		
		void Kova::KovaCiz(){ //Kovaya renk verip çizdirmek için fonksiyon.
			HANDLE renkVer;
			renkVer = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(renkVer, n);
			
			//Kova sapı çizdirme
			int i, j, k, n;
			n = 3;
			for (i = 1; i <= n; i++)
			{
				if (i == 0)
				{
					for (k = (n); k >= i; k--)
					{
						cout << " ";
					}
					cout << "." << endl;
				}
				for (k = n - 1; k >= i; k--)
				{
					cout << " ";
				}
				cout << ".";
				for (j = 1; j <= (2 * i - 1); j++)
				{
					if (i == 1 || k == 4)
					{
						cout << "|";
					}
					else
						cout << " ";
				}
				cout << ".";               
				cout << endl;
			}
			
			//Kova alti çizdirme
			
			int x, y;

			for (y = 1; y <= 4; y++)
			{
				for (x = 1; x <= 7; x++)
				{
					if (x == 1 || y == 4 || x == 7)
						cout << "#";
					else if (x == 4 && y == 2) {
						if(top == 0)
							cout << "-";
						else
						cout << top->Top::TopKarakterDondur();
					}
					else
						cout << " ";
					
				}
				cout << endl;
				x--;
			}
			
			cout<< "Kova adresi: " << this << endl; //Kova adresini yazdırma
			if(top == 0) //Top adresini yazdırma
				cout<< "Topun adresi: " << "NULL" << endl << endl;
			else
				cout<< "Topun adresi: " << top << endl << endl;
				
			
			SetConsoleTextAttribute(renkVer, 7);
			
		}
		
	

