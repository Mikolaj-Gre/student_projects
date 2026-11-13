#include <iostream>

using namespace std;

int main(){
const int size = 3;
int numbers[size];
for(int i = 0; i<size ; i++){
     cout<<"Wpisz numer   ";
     cin >> numbers[i];
};
cout<<"numery wpisane: ";
for(int i = 0; i < size ; i++){
cout<< numbers[i] << " ";
}
	return 0;
}
