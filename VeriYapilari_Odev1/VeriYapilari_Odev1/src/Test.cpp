/**
* @file  Test.cpp
* @description Programı çalıştıracak kodları çalıştırıyor.
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

int main(int argc, char** argv) {

	Top* tempTop;
	Kova* tempKova;

	srand(time(NULL));
	int kovaSayisi;
	cout << "Kova Sayisi Giriniz: ";
	cin >> kovaSayisi;
	Kova** kovalar = new Kova * [kovaSayisi];	
	
	for (int i = 0; i < kovaSayisi; i++)
	{
		kovalar[i] = new Kova();
	}
	
	for(int i = 0; i < kovaSayisi; i++)
	{
		cout<< endl << i + 1 << ". Kova" << endl << endl;
		kovalar[i]->KovaCiz();
	}


	int sec;
	do {
		cout << "[1] Toplari Yerlestir" << endl;
		cout << "[2] Toplari Yoket" << endl;
		cout << "[3] Kova Degistir" << endl;
		cout << "[4] Top Degistir" << endl;
		cout << "[5] Kovalari Tersten Yerlestir" << endl;
		cout << "[6] Toplari Tersten Yerlestir" << endl;
		cout << "[7] Cikis" << endl;
		cout << "Secim:";
		cin >> sec;
		switch (sec) 
		{
			case 1:
				for(int i = 0; i < kovaSayisi; i++)
				{
					kovalar[i]->TopOlustur();
					cout<< endl << i + 1 << ". Kova" << endl << endl;
					kovalar[i]->KovaCiz();
				}
			break;
			case 2:
				for(int i = 0; i < kovaSayisi; i++)
				{
					kovalar[i]->TopSil();
					cout<< endl << i + 1 << ". Kova" << endl << endl;
					kovalar[i]->KovaCiz();
				}
			break;
			case 3:
				int secim1, secim2;
				cout<<"Hangi Kova: ";
				cin>>secim1;
				cout<<endl;
				cout<<"Hangi Kova Ile: ";
				cin>>secim2;
				
				tempKova = kovalar[secim1 - 1];
				kovalar[secim1 - 1] = kovalar[secim2 - 1];
				kovalar[secim2 - 1] = tempKova;
				for(int i = 0; i < kovaSayisi; i++)
				{
					cout<< endl << i + 1 << ". Kova" << endl << endl;
					kovalar[i]->KovaCiz();
				}
				break;
			case 4:
			
				int topSecim1, topSecim2;
				cout<<"Hangi Top: ";
				cin>>topSecim1;
				cout<<endl;
				cout<<"Hangi Top Ile: ";
				cin>>topSecim2;
				
				tempTop = kovalar[topSecim1 - 1]->top;
				kovalar[topSecim1 - 1]->top = kovalar[topSecim2 - 1]->top;
				kovalar[topSecim2 - 1]->top = tempTop;
				for(int i = 0; i < kovaSayisi; i++)
				{
					cout<< endl << i + 1 << ". Kova" << endl << endl;
					kovalar[i]->KovaCiz();
				}
			
				break;
		
			case 5:
				for(int i = 0; i < kovaSayisi/2 ; i++)
				{
					tempKova = kovalar[i];
					kovalar[i] = kovalar[kovaSayisi - i - 1];
					kovalar[kovaSayisi - i - 1] = tempKova;
				}
				for(int i = 0; i < kovaSayisi; i++)
				{
					cout<< endl << i + 1 << ". Kova" << endl << endl;
					kovalar[i]->KovaCiz();
				}
				break;
			case 6:
				for(int i = 0; i < kovaSayisi/2 ; i++)
				{
					tempTop = kovalar[i]->top;
					kovalar[i]->top = kovalar[kovaSayisi - i - 1]->top;
					kovalar[kovaSayisi - i - 1]->top = tempTop;
				}
				for(int i = 0; i < kovaSayisi; i++)
				{
					cout<< endl << i + 1 << ". Kova" << endl << endl;
					kovalar[i]->KovaCiz();
				}
				
				break;
			
			case 7:	
				break;
			default:
				cout << endl << "Yanlis tercih!" << endl;
				cin.ignore();
				cin.get();
				break;
		 }
	} while (sec != 7);
	
	for(int i = 0; i < kovaSayisi; i++)
	{	
		kovalar[i]->TopSil();
		kovalar[i] = NULL;
		delete kovalar[i];
	}
}