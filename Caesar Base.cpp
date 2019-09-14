#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int main() {
int shift;
bool encode_or_decode;

cout<<"How many letters should I shift back?\n";
cin>>shift;
//while (shift>26) doesnt matter
//    shift-=26;

cout<<"0 to encode, 1 to decode\n";
cin>>encode_or_decode;
if (encode_or_decode==0)
    cout<<"Enter the text you want to encode\n";
else
    cout<<"Enter the text you want to decode\n";

string input;
getline(cin, input);
getline(cin, input);
char* text = &input[0]; //gets and stores the text without an array
unsigned short size = input.size();
if (encode_or_decode==0)
    for (int i=0; i<size; i++) {
        if (isalpha(input[i]))
            input[i]='a' + ((input[i] - 'a' + shift) % 26);
        cout<<input[i]; }
else
    for (int i=0; i<size; i++) {
        if (isalpha(input[i]))
            input[i]='a' + ((input[i] - 'a' - shift) % 26);
        cout<<input[i]; }

cout<<"\nPress any key to exit the program.\n";
getch();
}
