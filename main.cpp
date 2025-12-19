#include<iostream>
using namespace std;
int main()
{
    char* word=new char[100]; 
    cout<<"Enter a word: ";
    cin.getline(word,100); //Read a line of text including spaces
    bool palindrome=true;
    int length=0;
    while(word[length]!='\0') //Calculate length of the word
    {
        length++;
    }
    for(int i=0; i<length/2; i++) //Check for palindrome
    {
        if(word[i]!=word[length-1-i])
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
    delete[] word;
    return 0;
}