#include <iostream>
using namespace std;
int main(){
	int n,x,y;
	int w, A, v, B, k, c, z, D;
	cout << "Ingrese valor del numero" << endl;
	cin >> n;
	cout << "Ingrese valor de la base del numero ingresado" << endl;
	cin >> x;
	cout << "Ingrese valor de la nueva base" << endl;
	cin >> y;
	if (n > 0){
		if (x > 1 && x < 11) {
			if (y > 1 && y < 11) {
				w = 0;
				while (n > 0){
					A = n % 10;
					w = w*10+ A;
					n = n / 10;
				}
				v = 0;
				while (w > 0){
					B = w % 10;
					v = v * x + B;
					w = w / 10;
				}
				k = 0;
				while ( v > 0){
					c = v % y;
					k = k * 10 + c;
					v = v / y;
				}
				z = 0;
				while (k > 0){
					D = k % 10;
					z = z * 10 + D;
					k = k / 10;
				}
				
				 cout << "El numero convertido a la nueva base es: " << z << endl;
			} else {
				cout << "Numero invalido" << endl;
			}
			
		} else {
			cout << "Numero invalido" << endl;
		}
	} else {
		cout << "Numero invalido" << endl;
	}
		
	
	return 0;
}
