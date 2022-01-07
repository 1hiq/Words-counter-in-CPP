#include <iostream>
using namespace std;


int main(void) {
	
	string word = ""; // Here put the text that you want to know the number of its words
	int j = 1;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == ' ') {
			j++;
			cout << j << endl;
		}
		system("cls");
		cout << j << endl;
	}


	return 0;
}
