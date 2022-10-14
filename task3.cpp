#include <iostream>
using namespace std;
int l=0;
int main (){
	int n,s,p;
	cout<< "Input  n";
	cin>>n;
        for(int o =0; o<n; ++o){
		for (int i =0; i<(n-o-1); ++i){
                cout<<" ";}
		for (int i =0; i<(2*o+1); ++i){
        	 cout<<"*";}
		for (int i =0; i<(n-2*o-1); ++i){
		cout<<" ";}
        cout<<endl;}
	        for(int o =1; o<n; ++o){
                for (int i =0; i<(o); ++i){
                cout<<" ";}
                for (int i =0; i<(2*n-1-2*o); ++i){
                 cout<<"*";}
                for (int i =0; i<(o); ++i){
                cout<<" ";}
        cout<<endl;

        }

	return 0;
}
