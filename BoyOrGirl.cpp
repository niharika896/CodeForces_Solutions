#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    set<char> letters;
    string username;
    cin>>username;
    for(int i=0;i<username.length();i++){
        letters.insert(username[i]);
    }
    cout<<((letters.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}