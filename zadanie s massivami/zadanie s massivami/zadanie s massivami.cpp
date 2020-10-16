#include <iostream>
using namespace std;
int main(){
	int massiv[10] = { 4, 7, 1, 8, 10, 5, 9, 6, 2, 3};
	bool flag = true;
	while (flag){
		flag = false;
		for (int k = 0; k < 9; k++){

			if (massiv[k] > massiv[k + 1]){
				int elem = massiv[k];
				massiv[k] = massiv[k + 1];
				massiv[k + 1] = elem;
				flag = true;
			}
			else if (massiv [k] < massiv[k - 1]){
				int elem = massiv[k];
				massiv[k] = massiv[k - 1];
				massiv [k - 1] = elem;
				flag = true;
			}
		}
	}
	for (int k = 0; k < 10; k++){
		cout << massiv[k] << endl;
	}
	return 0;
}
