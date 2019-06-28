#include <iostream>
using namespace std;

int main(){
	float Bath;
	cout << "Input Thai Baths : ";
	cin >> Bath;
	cout << endl;
	cout << "************Exchange Rate***************" << endl;
	cout << Bath << " Baths is " << Bath * 0.033 << " dollars" << endl;
	cout << Bath << " Baths is " << Bath * 0.029 << " dollars" << endl;
	return 0 ;
}