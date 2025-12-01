#include <iostream>
#include <vector>
using namespace std;

// string shorten(string a){
string shorten(const string& a){
    int n=a.length();
    if(n<=10){
        return a;
    }
    else{
        return a.front() + to_string(n-2) + a.back();
    }

}

int main()
{

    int n;
    cin>>n;
    vector<string> words(n);
    // for(int i=0;i<n;i++){
    //     cin>>words[i];
    // }
    for(string& word:words){
        cin>>word;
    }
    for(const string& word:words){
        cout<<shorten(word)<<'\n';
    }
    return 0;
}
