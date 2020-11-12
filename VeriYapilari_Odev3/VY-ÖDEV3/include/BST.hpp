#ifndef BST_HPP
#define BST_HPP

using namespace std;

class BST
{
	private:
		/*
		BST* sag, *sol, *altDugum;
		//string veri;
		string kontrol;
		int sayac;
		int toplamSoySayisi;
		int enBuyuk;*/
		
	public:
		BST();
		BST(string &veri,BST *sag, BST *sol, BST *altDugum, int sayac, int seviye, int seviyetemp);
		void Kontrol(BST* eleman);
		void DugumEkle(BST *dugum, string &Fveri);
		void SeviyeYazdir(BST *Dugum, int seviye);
		void SoySayisiArttir(int sayac);
		int SoySayisiDondur();
		int EnBuyukDondur();
		void YerDegistir(BST *Dugum, string veri);
		string DugumSil(BST *Dugum, int deger);
				void SoySayisiSifirla();

		BST* kok;
		int seviye; string veri; BST* sag, *sol, *altDugum;
		//string veri;
		string kontrol;
		int sayac; int seviyetemp = 0;
		int toplamSoySayisi;
		int enBuyuk; BST* silinecekDugum =NULL;
};

#endif