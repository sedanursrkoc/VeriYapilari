#ifndef DOSYA_HPP
#define DOSYA_HPP
#include "BST.hpp"

using namespace std;

class Dosya
{
	private:
		string metin;
		string sub;
		int benimSkor = 0;
		int rakipSkor = 0;
		int turSayisi = 0;
	public:
		void BenimDosyaOku();
		void RakipDosyaOku();
		void DosyaYazdir();
		void SkorKontrol();
		bool TurKontrol();
	
		BST* bstBenim = new BST();
		BST* bstRakip = new BST();
};

#endif