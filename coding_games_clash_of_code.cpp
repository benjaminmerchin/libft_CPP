#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    string a;
    cin >> a; cin.ignore();
    string b;
    cin >> b; cin.ignore();
	int c = (n%2==0) ? 1 : 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < n/2 && j < n/2 && i+j <= n/2 - c) { //top left
				cout << a;
			}
			else if (i < n/2 && j >= n/2 && j-i >= n/2) { //top right
				cout << a;
			}
			else if (i >= n/2 && j < n/2 && i-j >= n/2) { //bottom left
				cout << a;
			}
			else if (i >= n/2 && j >= n/2 && i+j >= n+n/2-1) { //bottom right
				cout << a;
			}
			else 
				cout << b;
		}
		cout << endl;
	}
}
