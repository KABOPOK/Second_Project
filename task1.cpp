#include <iostream>
using namespace std;
int l=0;
int main (){
	int n;
	cout<< "Input  n";
	cin>>n;
	for(int i =0; i<n; ++i){
		l=l+1;
		for(int i =0; i<l; ++i){
		cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}
