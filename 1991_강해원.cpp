#include <iostream>
#include <vector>

using namespace std;



struct Node {
	char left;
	char right;
};
vector<Node> tree_n(30); //≥ÎµÂ ¥„∞Ì ¿÷∞Ì ∞¢ ±∏¡∂√º æ»ø° left øÕ right ¥„±‚


void pre(char r) {
	if (r == '.') { //¿Á±Õ ≈ª√‚
		return;
	}
	cout << r;
	pre(tree_n[r-'A'].left);
	pre(tree_n[r-'A'].right);

}


void in(char r) {
	if (r == '.') { //¿Á±Õ ≈ª√‚
		return;
	}
	in(tree_n[r-'A'].left);
	cout << r;// Dµµ¬¯«ÿº≠ pop«“∂ß 
	in(tree_n[r-'A'].right);
}

void post(char r) {
	if (r == '.') { //¿Á±Õ ≈ª√‚
		return;
	}
	post(tree_n[r-'A'].left);
	post(tree_n[r-'A'].right);
	cout << r;
}




int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		tree_n[a-'A'].left = b;
		tree_n[a-'A'].right = c;
	}

	pre('A');
	cout << endl;
	in('A');
	cout << endl;
	post('A');
	cout << endl;

	return 0;

}
