//BoxOperators
//Operacje na obiektach klasy CBox, kt�re nie wymagaj� dostepu do sk�adowych prywatnych.
#include "Box.h"

//Funkcja sprawdzaj�ca, czy sta�a jest > ni� obiekt klasy CBox.
bool operator>(const double& value, const CBox& aBox)
{ return value > aBox.Volume(); }

//Funkcja sprawdzaj�ca, czy sta�a jest < ni� obiekt klasy CBox.
bool operator<(const double& value, const CBox& aBox)
{ return value < aBox.Volume(); }

//Funkcja sprawdzaj�ca, czy obiekt klasy CBox jest > od sta�ej.
bool operator>(const CBox& aBox, const double& value)
{ return value > aBox; }

//Funkcja sprawdzaj�ca, czy obiekt klasy CBox jest < od sta�ej.
bool operator<(const CBox& aBox, const double& value)
{ return value < aBox; }

//Funkcja sprawdzaj�ca, czy sta�a jest >= od obiektu klasy CBox.
bool operator>=(const double& value, const CBox& aBox)
{ return value >= aBox.Volume(); }

//Funkcja sprawdzaj�ca, czy sta�a jest <= od obiektu klasy CBox.
bool operator<=(const double& value, const CBox& aBox)
{ return value <= aBox.Volume(); }

//Funkcja sprawdzaj�ca, czy obiekt klasy CBox jest >= od sta�ej.
bool operator>=(const CBox& aBox, const double& value)
{ return value <= aBox; }

//Funkcja sprawdzaj�ca, czy obiekt klasy CBox jest <= od sta�ej.
bool operator<=(const CBox& aBox, const double& value)
{ return value >= aBox; }

//Funkcja sprawdzaj�ca, czy sta�a jest == obiektowi klasy CBox.
bool operator==(const double& value, const CBox& aBox)
{ return value == aBox.Volume(); }

//Funkcja sprawdzaj�ca, czy obiekt klasy CBox jest == sta�ej.
bool operator==(const CBox& aBox, const double& value)
{ return value == aBox; }

//Operator mno�enia klasy CBox - n*aBox
CBox operator*(int n, const CBox& aBox)
{ return aBox*n; }

//Operator zwracaj�cy pojemno�� wolnej przestrzeni zapakowanego obiektu klasy CBox.
double operator%(const CBox& aBox, const CBox& bBox)
{ return aBox.Volume() - (aBox / bBox) * bBox.Volume() ;}

