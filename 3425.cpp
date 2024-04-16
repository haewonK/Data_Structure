
#include <iostream>
#include <vector>

using namespace std;


int n, delete_n, root;
int cnt = 0;

vector<vector<int>> Tree(51);


void find_node(int r) {
	bool leaf = true;
	for (int i = 0; i < Tree[r].size(); i++) { //leat노드면 size 0이라 거치지않고 조건문으로 들어감 
		if (Tree[r][i] != delete_n) {
			leaf = false;
			find_node(Tree[r][i]);
		}

	}
	if (leaf == true) cnt++;


}


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int p_n;
		cin >> p_n;
		if (p_n == -1) {
			root = i;
		}
		else if (p_n != -1) {

			Tree[p_n].push_back(i);
		}
	}

	cin >> delete_n;
	if (delete_n == root) cout << 0;

	else {
		find_node(root); //루트부터 순회하면서 삭제
		cout << cnt;
	}



}