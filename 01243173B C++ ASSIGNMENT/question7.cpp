#include <iostream>
#include <string>
using namespace std;

int main(){
    string userInput;

    cout << "Enter a string: " << std;
    getline (cin userInput);

    if (userInput.find ('a')! = string :: npos){
        cout <<"Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }

    return 0;
}