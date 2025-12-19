#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string word;
    cout<<"Enter a word: ";
    getline(cin, word); //Read a line of text including spaces
    bool palindrome=true;
    int length=word.length();
    for(int i=0; i<length/2; i++) //Check for palindrome
    {
        if(word[i]!=word[length-1-i]) //Compare characters
        {
            palindrome=false;
            break;
        }
    }
    if(palindrome)
    {
        cout<<"The word is a palindrome."<<endl;
    }else
    {
        cout<<"The word is not a palindrome."<<endl;
    }
    return 0;
}