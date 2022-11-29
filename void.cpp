#include <iostream>
using namespace std;

void a(int a, int b){
	cout<<a/b;
}
	
void a(int a, int b, int c){
	cout<<a*b*c;
}

void a(string a, string b){
	cout<<a<<" berkaki "<<b;
}

int main(){
	
	a(5,5);
	cout<<endl;
	a(8, 2, 10);
	cout<<endl;
	a("ayam","dua");
	
return 0;
}
