#pragma once
#include <string>

class TRachunek
{
public:
	TRachunek(std::string imie, std::string nazwisko, float saldo, float debet); // dopuszczalny debet standardowy 0, poczatkowy stan konta 0
	void PodajStanKonta(); // zwraca stan konta
	void Wplata(float przesyl); //zwiêksza stan konta o podany parametr
	bool Wyplata(); // zwraca true jezeli jest tyle srodkow na koncie czyli wplata+debet>=0
//	bool CzyDebet(); //zwraca true gdy stan rachunku jest ujemny
//	void Przelew(float rachunek, float kwota); //dokonuje wp³aty o wielkoœci kwota na rachunek.....................
//	void NaliczOdsetki(float odsetki); //oblicza kwote odsetek w zaleznosci od parametru i zwraca kwote odsetek
//  void Wyswietl(); //wyswietla informacje o rachunku

private:
	std::string m_imie;
	std::string m_nazwisko;
	float m_saldo;
	float m_debet;

};
