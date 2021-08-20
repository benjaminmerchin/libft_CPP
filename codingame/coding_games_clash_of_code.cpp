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

/* PYTHON
import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
a = input()
b = input()
l=[]
print(a*n)
if n%2!=0:
    for i in range(int((n-2)/2)+1):
        l.append(((int(n/2)-i)*a)+(b*(i+i+1))+((int(n/2)-i)*a))
        print(((int(n/2)-i)*a)+(b*(i+i+1))+((int(n/2)-i)*a))
    for i in l[(len(l)-2)::-1]:
        print(i)
else:
    for i in range(int((n-2)/2)):
        l.append(((int(n/2)-i-1)*a)+(b*(i+i+2))+((int(n/2)-i-1)*a))
        print(((int(n/2)-i-1)*a)+(b*(i+i+2))+((int(n/2)-i-1)*a))
    for i in l[(len(l)-1)::-1]:
        print(i)
print(a*n)
*/