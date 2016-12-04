#include "stdafx.h"
#include "TRachunek.h"
#include <string>
#include <iostream>


TRachunek::TRachunek(std::string imie = "Imie", std::string nazwisko = "Nazwisko", float saldo = 0, float debet = 0)
	:m_imie(imie), m_nazwisko(nazwisko), m_saldo(saldo), m_debet(debet)
{

}
void TRachunek::PodajStanKonta()
{
	std::cout << "Stan konta wynosi: " << m_saldo << "z³." << std::endl;
}
void TRachunek::Wplata(float przesyl)
{
	if (przesyl < 0)
		return;
	m_saldo += przesyl;
}