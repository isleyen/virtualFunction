#include <iostream>

using namespace std;

// Base class
class Hayvan {
public:
	virtual void hayvanSesi() {
		cout << "Hayvan sesi cagilirdi.\n";
	}
	void yazdir() {
		cout << "Hayvan sinifi icerisindeki yazdir fonskiyonu cagirildi!\n";
	}
};


// Child class 
class Kus : public Hayvan {
public:
	void hayvanSesi() {
		cout << "cik cik cik...\n";
	}
	void yazdir() {
		cout << "kus sinifi icindeki yazdýr fonksiyonu cagirildi!\n";

	}
};

// Child class
class Kopek : public Hayvan{
public:
	void hayvanSesi() {
		cout << "hav hav hav...\n";
	}
	void yazdir() {
		cout << "Kopek sinifi icindeki yazdir fonksiyonu cagirildi!\n";
	}
};

int main() {

	Hayvan* pHayvan;
	
	Kopek karabas;
	pHayvan = &karabas;
	pHayvan->hayvanSesi();

	Kus limon;
	pHayvan = &limon;
	pHayvan->hayvanSesi();
	
	cout << "----------------\n\n";

	pHayvan->yazdir(); // Sanal fonksiyon olmadigi için hayvan classininn yazdir fonksiyonunu cagirdi.
	karabas.yazdir(); // Diger classlarin yazdir fonksiyonunu cagirmak istiyorsak bu sekilde yazdirabiliriz.

	return 0;
}