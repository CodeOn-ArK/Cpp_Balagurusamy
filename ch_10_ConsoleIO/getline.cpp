#include <iostream>

using namespace std;

int main() {
  int size = 20;
  char city[20];
  /*
    cout << "Enter city name: \n";
    cin >> city;
    cout << "City name: " << city << endl;
  */
  cout << "Enter city name: \n";
  cin.getline(city, size, '\n');
  cout << "City name: " << city << endl << endl;
  //  if (cin) cin.ignore(20, '\n');

  cout << "Enter city name: \n";
  cin.getline(city, size);
  cout << "City name: " << city << endl << endl;

  return 0;
}
