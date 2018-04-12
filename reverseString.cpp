#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    int n = s.size();
    int counter = n;
    string reversed;

    cout << "Size of string is " << n << "\n";

    for(int i = 0; i < counter; i++){
        cout << "Forward: " << s[i] <<  endl;
        reversed = reversed + s[n-1];
        n--;
    }
    return reversed;
}
int main()
{
    string s = "Hello";
    string reversed = reverseString(s);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
