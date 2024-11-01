#include<iostream> // standart libtary for input output stream
#include <string>

using namespace std; // Use standard namespace


string getName (string person) {
	
    cout << "Hello " << person << ". How are you ?!" << endl;
    
    return person ; 
	
}


int getAge (int age) {
	
	cout <<"AGE IS " <<age <<" years old" <<endl;
	
	return age;
}
int main () {
	
	
	string test = getName("alex"); 
	
	int age = getAge(25);
	return  0;	
}