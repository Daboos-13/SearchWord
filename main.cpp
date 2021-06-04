#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include<bits/stdc++.h>

using namespace std;
void search_word(string word , string phrase )
{
    int counter=0;
    cout << "Enter Word \n";
    getline(cin, word);
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout << "Enter Phrase \n";
    getline(cin, phrase);
    transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);
    for (int i=0 ; i<phrase.size(); i++)
    {
        if (phrase[i] != ' ')
        {
            if (word[i]==phrase[i])
            {
                counter++;
            }
        }
    }
    cout << "This Keyword : "<<word<<" : appeared : "<<counter << " times in your phrase.\n";
}
int main()
{
    string word , pharse ;
    search_word(word,pharse);
    return 0;
}
