#include <iostream>

using namespace std;

int main()
{
	string s1 = "Hola";
	string s2 = " mundo";
	string& lValueRef = s1;
	lValueRef = "Hola a todo el ";
	string&& rValueRef = s1 + s2;
	rValueRef += ", bienvenidos";
	cout<< rValueRef<<endl;
	
	return 0;
}
