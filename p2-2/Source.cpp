/* Oscar Hoegler, September 1 2022, Labratory 2.2*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	cout << "Hello, my name is Hal!" << endl;
	cout << "What is your name? ";
	string user_name;
	getline(cin, user_name); 
	cout << "Hello, " << user_name << ". I am glad to meet you.";
	return 0;
}