// A. Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter Your Word Please = ";
    string Word;
    cin >> Word;
    int Upper = 0, Lower = 0;
    for(int i = 0; i < Word.size(); i++)
    {
        if(isupper(Word[i]))
        {
            Upper++;
        }
        else
        {
            Lower++;
        }
    }

    if(Upper == Lower)
    {
        for(int i = 0; i < Word.size(); i++)
        {
            Word[i] = tolower(Word[i]);
        }
        cout << Word;
    }
    else if(Upper < Lower)
    {
        for(int i = 0; i < Word.size(); i++)
        {
            Word[i] = tolower(Word[i]);
        }
        cout << Word;
    }
    else if(Lower < Upper)
    {
        for (int i = 0; i < Word.size(); i++)
        {
            Word[i] = toupper(Word[i]);
        }
        cout << Word;
    }
}
