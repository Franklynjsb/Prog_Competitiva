#include <bits/stdc++.h>

using namespace std;

void Carry(int numero, int numero2, int &carry) {
	int resto=0, num, num2;
	
	while (numero > 0 || numero2 > 0){
		num = numero%10;
		num2 = numero2%10;
		
		if ((num+num2+resto)>=10){
			resto=1;
			carry++;
		}else {
			resto=0;
		}
		
		numero/=10;
		numero2/=10;
	}
}

int main(int argc, char *argv[]) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M, carry=0;
	
	while (cin>>N>>M, N!=0 || M!=0){
		
		Carry(N,M,carry);
		
		if (carry==0){
			cout << "No carry operation."<< endl;;
		}else {
			if (carry==1) {
				cout << carry << " carry operation."<< endl;;
			}else {
				cout << carry << " carry operations."<< endl;;
			}
			carry = 0;
		}
	}
	
	return 0;
}

