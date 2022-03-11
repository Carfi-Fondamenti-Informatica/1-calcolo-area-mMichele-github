#include <iostream>
using namespace std;

int main(){
  //Qui vanno definite le variabili
  float a=0, b=0, c=0;
  cout << "Inserire 3 valori reali in metri" << endl;

  cin >> a >> b >> c;

  //Qui va scritto il codice per eseguire i calcoli richiesti
  cout << ((a*b)/2) << endl << (a*a) << endl << (a*b) << endl << ((a+b)*c)/2 << endl;
  return 0;
}
