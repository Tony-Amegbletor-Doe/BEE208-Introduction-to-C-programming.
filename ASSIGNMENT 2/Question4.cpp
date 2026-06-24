#include <iostream>
using namespace std;

int main() {
char ch;
int vowel_count = 0;// initialize vowel count to 0

cout <<"Enter a series of characters, enter 'q' to stop: ";
cin >> ch;// read in first character

while(ch !='q') {// loop until 'q' is entered
if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' || ch =='A' || ch =='E' || ch =='I' || ch ==
'O' || ch =='U') {
vowel_count++;// increment vowel count if characteris a vowel
}
cin>> ch;// read in next character
}

cout<<"Number of vowels entered: "<< vowel_count<<endl;// print out vowel count

return 0;
}