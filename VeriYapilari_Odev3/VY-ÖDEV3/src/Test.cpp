#include <iostream>
#include <fstream>
#include <sstream>
#include <conio.h>
#include "BST.hpp"
#include "Dosya.hpp"

using namespace std;
int main()
{
	Dosya* dosya = new Dosya();
	dosya->BenimDosyaOku();
	dosya->RakipDosyaOku();
	
	
	
	do{
		dosya->DosyaYazdir();
		cout<<"**************************************************************************"<<endl;
		dosya->SkorKontrol();
		cout << endl;
		cout << "Devam etmek icin bir tusa basiniz..." << endl;
		
		
		
		
	}while(getch() && dosya->TurKontrol());
	
	cout<<endl<<endl;

	
}





















