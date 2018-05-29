#include <iostream>
#include <sstream>
#include"string"
#include"cstring"
#include <unordered_map>
#include <map>
using namespace std;

void printM(unordered_map<char,int> a){
	for(unordered_map<char,int>::iterator i1 = a.begin(); i1 != a.end() ; i1++){
		cout << '(' << i1->first << ","  << i1->second << ")" << endl;
	}
}

char pickOdd(unordered_map<char,int> &q){
	for(unordered_map<char,int>::iterator i1 = q.begin(); i1 != q.end() ; i1++){
		if(i1 -> second % 2 == 1){
			i1->second--;
			if(i1->second == 0) q.erase(i1);
			return i1->first;
		}
	}
	for(unordered_map<char,int>::iterator i1 = q.begin(); i1 != q.end() ; i1++){
		q[i1->first]--;
		return i1->first;
	}
}

char pickEven(unordered_map<char,int> &q){
	for(unordered_map<char,int>::iterator i1 = q.begin(); i1 != q.end() ; i1++){
		if(i1 -> second % 2 == 0){
			i1->second -= 2;
			if(i1->second == 0) q.erase(i1);
			//existOdd = true;
			return i1->first;
		}
	}
	for(unordered_map<char,int>::iterator i1 = q.begin(); i1 != q.end() ; i1++){
		q[i1->first] -= 2;
		return i1->first;
	}
}

int main(){
	int n;
	cin >> n;
	string s;
	unordered_map<char,int> myMap;
	cin>>s;
	for(int i = 0 ; i < n ; i++){
		myMap[s[i]]++;
	}
	//printM(myMap);
	int odd = 0, even = 0, cut = 0;
	for(unordered_map<char,int>::iterator i1 = myMap.begin(); i1 != myMap.end() ; i1++){
		if(i1->second % 2 == 0) even++;
		else odd++;
	}
	cut = odd;
	if(odd == 0){
		int length = n;
		string full = string(n,' ');
		for(int i = 0 ; i < n/2 ; i++){
			char even = pickEven(myMap);
			full[i] = even;
			full[n - i - 1] = even;
		}
		cout << 1 << endl;
		cout << full << endl;
	}
	else {
		while(cut <= n){
			if(n % cut == 0){
				if((n/cut) % 2 == 1) break;
				else cut++;
			}
			else cut++;
		}	
		//cout << "Odd : " << odd << " Even : " << even << " Cut : " << cut << endl;
		int length = n/cut;
		//cout << "Length : " << length << endl;
		cout << cut << endl;
		for(int i = 0 ; i < cut ; i++){
			string part = string(length , ' ');
			char odd = pickOdd(myMap);
			part[length/2] = odd;
			for(int j = 0 ; j < length/2 ; j++){
				char even = pickEven(myMap);
				part[j] = even;
				part[length- 1 -j] = even;
			}
			cout << part << " ";
		}
		cout << endl;
	}
}
