#include <iostream>
using namespace std;

int main(){
	float Bath;
	cout << "Input Thai Baths : ";
	cin >> Bath;
	cout << endl;
	cout << "************Exchange Rate***************" << endl;
	cout << Bath << " Baths is " << Bath * 0.033 << " dollars" << endl;
	cout << Bath << " Baths is " << Bath * 0.029 << " Euro" << endl;
	cout << Bath << " Baths is " << Bath * 3.52 << " Yen" << endl;
	cout << Bath << " Baths is " << Bath * 760.66 << " dong" << endl;
	cout << Bath << " Baths is " << Bath * 0.026 << " pound" << endl;
	return 0 ;
}