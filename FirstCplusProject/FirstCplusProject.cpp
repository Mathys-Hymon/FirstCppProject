#include <iostream>
using namespace std;

int main()
{
    cout << "What is your name ?" << endl;
    string answer;
    cin >> answer;
    cout << "Hello " << answer << endl << ", how are you today ?" << endl;


    int x = 14;
    cout << "The value " << x << " is stored in " << &x << endl;
    cout << "The value " << answer << " is stored in " << &answer << endl;
}
