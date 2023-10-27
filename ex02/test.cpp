#include<iostream>
using namespace std;

template<typename T>
T moyenne(T tableau[], int taille)
{
  T somme(0);                  //La somme des éléments du tableau
  for(int i(0); i<taille; ++i)
    somme += tableau[i];

  return somme/taille;
}

int main()
{
  int tab[5];

  tab[0] = 4;
  tab[1] = 43;
  tab[2] = 1;
  tab[3] = 32;
  tab[4] = 9;
  //Remplissage du tableau

  cout << "Moyenne : " << moyenne<int>(tab,5) << endl;

  return 0;
}
