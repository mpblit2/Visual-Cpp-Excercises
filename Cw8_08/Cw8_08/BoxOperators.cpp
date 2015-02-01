//BoxOperators
//Operacje na obiektach klasy CBox, które nie wymagaj¹ dostepu do sk³adowych prywatnych.
#include "Box.h"

//Funkcja sprawdzaj¹ca, czy sta³a jest > ni¿ obiekt klasy CBox.
bool operator>(const double& value, const CBox& aBox)
{ return value > aBox.Volume(); }

//Funkcja sprawdzaj¹ca, czy sta³a jest < ni¿ obiekt klasy CBox.
bool operator<(const double& value, const CBox& aBox)
{ return value < aBox.Volume(); }

//Funkcja sprawdzaj¹ca, czy obiekt klasy CBox jest > od sta³ej.
bool operator>(const CBox& aBox, const double& value)
{ return value > aBox; }

//Funkcja sprawdzaj¹ca, czy obiekt klasy CBox jest < od sta³ej.
bool operator<(const CBox& aBox, const double& value)
{ return value < aBox; }

//Funkcja sprawdzaj¹ca, czy sta³a jest >= od obiektu klasy CBox.
bool operator>=(const double& value, const CBox& aBox)
{ return value >= aBox.Volume(); }

//Funkcja sprawdzaj¹ca, czy sta³a jest <= od obiektu klasy CBox.
bool operator<=(const double& value, const CBox& aBox)
{ return value <= aBox.Volume(); }

//Funkcja sprawdzaj¹ca, czy obiekt klasy CBox jest >= od sta³ej.
bool operator>=(const CBox& aBox, const double& value)
{ return value <= aBox; }

//Funkcja sprawdzaj¹ca, czy obiekt klasy CBox jest <= od sta³ej.
bool operator<=(const CBox& aBox, const double& value)
{ return value >= aBox; }

//Funkcja sprawdzaj¹ca, czy sta³a jest == obiektowi klasy CBox.
bool operator==(const double& value, const CBox& aBox)
{ return value == aBox.Volume(); }

//Funkcja sprawdzaj¹ca, czy obiekt klasy CBox jest == sta³ej.
bool operator==(const CBox& aBox, const double& value)
{ return value == aBox; }

//Operator mno¿enia klasy CBox - n*aBox
CBox operator*(int n, const CBox& aBox)
{ return aBox*n; }

//Operator zwracaj¹cy pojemnoœæ wolnej przestrzeni zapakowanego obiektu klasy CBox.
double operator%(const CBox& aBox, const CBox& bBox)
{ return aBox.Volume() - (aBox / bBox) * bBox.Volume() ;}

