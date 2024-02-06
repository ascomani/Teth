#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string someWords = "apple banana mango strawberry orange grape pineapple apricot lemon coconut watermelon cherry papaya berry peach lychee muskmelon";

vector<string> splitSentence(const string& sentence){
    istringstream iss(sentence);
    vector<string> words;
    string word;

    while(iss>>word){
        words.push_back(word);
    }

    return words;
}

int main(){

    vector<string> speak = splitSentence(someWords);
    for(const string& word : speak){
        cout<<word<<endl;
    }
    return 0;
}